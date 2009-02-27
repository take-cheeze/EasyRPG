#ifndef MOVIE_H_INCLUDED
#define MOVIE_H_INCLUDED
/*
*   Basado en el tutorial de FFMPEG por Stephen Dranger en
*                           http://www.dranger.com/ffmpeg/
*/

#include <cstring>

//Librerias en C
#ifdef __cplusplus
extern "C"{
#endif
    //SDL
    #include <SDL/SDL.h>
    #include <SDL/SDL_thread.h>
    //FFMPEG
    #include <ffmpeg/avcodec.h>
    #include <ffmpeg/avformat.h>
    #include <ffmpeg/swscale.h>

#ifdef __cplusplus
}
#endif


class Movie {
    public:
        Movie();
        bool init(std::string nombre);
        bool play(SDL_Surface *scr, Sint16 x=0, Sint16 y=0); //w=0 h=0 no scale
        void stop();
        bool update();
        void dumpFormat();
        void dispose();
        int width();                    // Dimensiones del video
        int height();                   //
        void setWidth();
        void setHeight();
        void stretchToFit();

    private:
    //Variables de FFMPEG
        AVFormatContext *pFormatCtx;    //Información sobre el formato de archivo utilizado
        AVCodecContext *pCodecCtx;      //Información sobre el codec utilizado..
        AVCodec *pCodec;                //Puntero a un codec especifico
        AVFrame *pFrame;                //Puntero al Frame sin procesar...

    //Variables SDL
        SDL_Overlay     *bmp;
        SDL_Rect rect;

    //Otras variables
        bool is_playing;
        int mWidth;
        int mHeight;
        Sint16 dstWidth;
        Sint16 dstHeight;
        std::string url;                // url o nombre de archivo
        bool file_ok;                   // true si se ha logrado cargar un video
        int videoStream;                // Id del Stream de Video
        bool fit_me;
};

class MovieSystem {
    public:
        MovieSystem();
        //Estas 2 funciones estaticas son con el fin de obtener el objeto MovieSystem
        static MovieSystem *getSingletonPtr();
        static MovieSystem &getSingleton();
        void setError(const char *error);
        std::string &getLastError();
    private:
        static MovieSystem myself;
        std::string LastErrorString;
};
#endif // MOVIE_H_INCLUDED
