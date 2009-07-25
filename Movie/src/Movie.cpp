#include <iostream>
#include "../include/Movie.h"
using namespace std;

long diffTimeb(timeb end, timeb start){
    return (long) ((1000*(end.time - start.time)) + (end.millitm - start.millitm));
}

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
    swsC = (struct SwsContext*) NULL;
    frameFinished = 0;
    bmp = (SDL_Overlay *) NULL;
}

bool Movie::init(std::string nombre){
    AVRational tb;
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

    //obteniendo la base de tiempo...

    tb = pCodecCtx->time_base;
    timebase = (double) ((tb.num)/((double)(tb.den)));

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

int Movie::originalWidth(){ return mWidth; }
int Movie::originalHeight(){ return mHeight; }
int Movie::width(){ return dstWidth; }
int Movie::height(){ return dstHeight; }

void Movie::setWidth(int w){
    dstWidth = w;
}
void Movie::setHeight(int h){
    dstHeight = h;
}

void Movie::stretchToFit(bool estirar){
   fit_me = estirar;
}

bool Movie::isPlaying(){
    return is_playing;
}

bool Movie::play( Sint16 x, Sint16 y ){
    double rate;
    is_playing = true;
    frameFinished = 0;
    SDL_Surface *scr = SDL_GetVideoSurface(); //obtenemos la superficie de video

    rate = mWidth/mHeight;
    //Si ya existía un overlay lo borramos...
    if (bmp) {
        SDL_FreeYUVOverlay(bmp);
        bmp = (SDL_Overlay *) NULL;
    }

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
    ftime(&frameTime);

    if(swsC) sws_freeContext(swsC);
    swsC = sws_getContext(pCodecCtx->width, pCodecCtx->height, pCodecCtx->pix_fmt, rect.w, rect.h, PIX_FMT_YUV420P, SWS_FAST_BILINEAR, NULL, NULL, NULL);

    return true;
}

void Movie::resume(){
    if(bmp) is_playing = true;
    ftime(&frameTime); //esto es para reiniciar el temporizador ...
}

void Movie::stop(){
    is_playing = false;
    //Si ya existía un overlay lo borramos...
    if (bmp) {
        SDL_FreeYUVOverlay(bmp);
        bmp = (SDL_Overlay *) NULL;
    }
    if(swsC) sws_freeContext(swsC);
    swsC = (struct SwsContext*) NULL;
}

void Movie::pause(){
    is_playing = false;

}

void Movie::renderFrame(){
    ftime(&currentTime);
    if(diffTimeb (currentTime,frameTime) >= (long)(timebase*1000)) {
        frameTime = currentTime;
        SDL_LockYUVOverlay(bmp);
            AVPicture pict;
            pict.data[0] = bmp->pixels[0];
            pict.data[1] = bmp->pixels[2];
            pict.data[2] = bmp->pixels[1];

            pict.linesize[0] = bmp->pitches[0];
            pict.linesize[1] = bmp->pitches[2];
            pict.linesize[2] = bmp->pitches[1];

            if(swsC) sws_scale( swsC, pFrame->data, pFrame->linesize, 0, pCodecCtx->height, pict.data, pict.linesize  );
            else return;
        SDL_UnlockYUVOverlay(bmp);

        SDL_DisplayYUVOverlay(bmp, &rect);
        frameFinished = 0; //es necesario leer un frame nuevo... (ver la declaracion en Movie.h)
    }
   return;
}

bool Movie::update(){
    bool frame_ok=true;
    if(!bmp) return false;
    if(is_playing) {
        if (!frameFinished){
            frame_ok = (av_read_frame(pFormatCtx, &packet)>=0);
            if(frame_ok){
                  // Is this a packet from the video stream?
                  if(packet.stream_index==videoStream ) {
                        // decodificando el frame de video...
                                avcodec_decode_video(pCodecCtx, pFrame, &frameFinished,
                                                     packet.data, packet.size);
                                // ¿Se logró obtener un frame de video?
                                if(frameFinished) renderFrame();
                  }
                  // Liberando el paquete que se ha leido...
                  av_free_packet(&packet);
                }
        }else{
            renderFrame();
            return true;
        }
    }
    return frame_ok;
}

void Movie::dumpFormat(){
    dump_format(pFormatCtx,0,url.c_str(),0);
    cout << "Time Base: " << timebase << endl;
}

void Movie::dispose(){
    if(pFrame) av_free(pFrame); //liberando el frame
    avcodec_close(pCodecCtx); //liberando el contexto de codecs
    av_close_input_file(pFormatCtx); //cerrando el archivo...
    url.clear();
    if(swsC) sws_freeContext(swsC);        //liberando el contexto de swscale
    //Si ya existía un overlay lo borramos...
    if (bmp) {
        SDL_FreeYUVOverlay(bmp);
        bmp = (SDL_Overlay *) NULL;
    }
}
