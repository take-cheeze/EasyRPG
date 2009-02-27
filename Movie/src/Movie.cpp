#include <iostream>
#include "../include/Movie.h"
using namespace std;

//Creando el Sistema único...
MovieSystem MovieSystem::myself;

//Constructor de la Clase MovieSystem
MovieSystem::MovieSystem(){
    //Registrando todos los codecs
    av_register_all();
}
void MovieSystem::setError(const char *error){
    LastErrorString = error;
}
std::string &MovieSystem::getLastError(){
    return LastErrorString;
}
MovieSystem *MovieSystem::getSingletonPtr(){
    return &(myself);
}

MovieSystem &MovieSystem::getSingleton(){
    return myself;
}

//Movie

Movie::Movie(){
    mWidth = 0; mHeight = 0;
}

bool Movie::init(std::string nombre){
    videoStream=-1;
    file_ok = false;

    if( av_open_input_file(&pFormatCtx, nombre.c_str() ,NULL, 0, NULL)!=0 ){
        MovieSystem::getSingleton().setError("Error: No se pudo abrir el archivo..");
        return false;
    }

    //Buscando informacion de los Streams
    if( av_find_stream_info(pFormatCtx) < 0 ){
        MovieSystem::getSingleton().setError("Error: No se encontro Streams");
        return false;
    }
    //Se recorren los Streams buscando uno que sea de video
    for(unsigned int i=0; i<pFormatCtx->nb_streams; i++)
      if(pFormatCtx->streams[i]->codec->codec_type==CODEC_TYPE_VIDEO) {
        videoStream=i;
        break;
      }
    if(videoStream==-1){
        MovieSystem::getSingleton().setError("Error: No se ha encontrado un video Stream");
      return false;
    }

    //Se obtiene un puntero a la informacion del codec para el Stream de video
    pCodecCtx=pFormatCtx->streams[videoStream]->codec;
    //Se obtiene un puntero al codec especifico
    pCodec = avcodec_find_decoder( pCodecCtx->codec_id );

    //si se obtuvo el codec adecuado
    if(!pCodec){
        MovieSystem::getSingleton().setError("Error: No se encontro un codec de video adecuado...");
        return false;
    }

    if( avcodec_open( pCodecCtx, pCodec ) < 0){
        MovieSystem::getSingleton().setError("Error: No se logro cargar el codec de video...");
        return false;
    }

    //Almacenamos el tamaño del video...
    mWidth = pCodecCtx->width;
    mHeight = pCodecCtx->height;
    dstWidth = mWidth;
    dstHeight = mHeight;

    //Reservando memoria para el frame que se va a leer...
    pFrame=avcodec_alloc_frame();

    is_playing = false;

    url=nombre;
    file_ok = true;
    fit_me = false;
    return true;
}

int Movie::width(){ return mWidth; }
int Movie::height(){ return mHeight; }

void Movie::stretchToFit(){
   fit_me = true;
}

bool Movie::play(SDL_Surface *scr, Sint16 x, Sint16 y){
    double rate;
    is_playing = true;
    SDL_Event event;

    rate = mWidth/mHeight;

    if(!fit_me){
        bmp = SDL_CreateYUVOverlay(dstWidth, dstHeight, SDL_YV12_OVERLAY, scr);
        rect.x = x;
        rect.y = y;
        rect.w = dstWidth;
        rect.h = dstHeight;
    }else{
        if(mWidth>mHeight){
            bmp = SDL_CreateYUVOverlay(scr->w, (scr->w/rate), SDL_YV12_OVERLAY, scr);
                rect.x = 0;
                rect.y = (scr->h-(scr->w/rate))/2;
                rect.w = scr->w;
                rect.h = (scr->w/rate);
        }else{
            bmp = SDL_CreateYUVOverlay((scr->h*rate), scr->h, SDL_YV12_OVERLAY, scr);
                rect.x = (scr->w-(scr->h*rate))/2;
                rect.y = 0;
                rect.w = (scr->h*rate);
                rect.h = scr->h;
        }
    }
    if(!bmp){
        MovieSystem::getSingletonPtr()->setError("Error: No se pudo crear el overlay...");
        return false;
    }

    while( update() && is_playing ){
        SDL_PollEvent(&event);
        switch(event.type){
            case SDL_QUIT:
                is_playing = false;
                break;
            case SDL_KEYDOWN:
                is_playing = false;
                break;
            default : break;
        }
    }
    return true;
}

void Movie::stop(){
    is_playing = false;
    //hay que ver si se borra el overlay...
}

bool Movie::update(){
    int frameFinished;
    AVPacket packet;
    struct SwsContext* swsC;
    bool frame_ok = (av_read_frame(pFormatCtx, &packet)>=0);

    if(frame_ok){
      // Is this a packet from the video stream?
      if(packet.stream_index==videoStream) {
        // decodificando el frame de video...
        avcodec_decode_video(pCodecCtx, pFrame, &frameFinished,
                             packet.data, packet.size);
        // Did we get a video frame?
        if(frameFinished) {
            // Aqui se ejecuta lo que se necesite para cada frame...


            SDL_LockYUVOverlay(bmp);
                AVPicture pict;
                pict.data[0] = bmp->pixels[0];
                pict.data[1] = bmp->pixels[2];
                pict.data[2] = bmp->pixels[1];

                pict.linesize[0] = bmp->pitches[0];
                pict.linesize[1] = bmp->pitches[2];
                pict.linesize[2] = bmp->pitches[1];

                swsC = sws_getContext(pCodecCtx->width, pCodecCtx->height, pCodecCtx->pix_fmt, rect.w, rect.h, PIX_FMT_YUV420P, SWS_FAST_BILINEAR, NULL, NULL, NULL);

                //Probablemente el problema este en sws_scale...
                if(swsC) sws_scale( swsC, pFrame->data, pFrame->linesize, 0, pCodecCtx->height, pict.data, pict.linesize  );
                else return false;

            SDL_UnlockYUVOverlay(bmp);
            SDL_DisplayYUVOverlay(bmp, &rect);
        }
      }
      // Liberando el paquete que se ha leido...
      av_free_packet(&packet);
    }
    return frame_ok;
}

void Movie::dumpFormat(){
    dump_format(pFormatCtx,0,url.c_str(),0);
}

void Movie::dispose(){
    if(pFrame) av_free(pFrame); //liberando el frame
    avcodec_close(pCodecCtx); //liberando el contexto de codecs
    av_close_input_file(pFormatCtx); //cerrando el archivo...
    url.clear();
}
