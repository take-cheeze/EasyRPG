#include <iostream>

#include "../include/Movie.h"


using namespace std;

Movie peli;

int main(int argc, char *argv[]){

    if(SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_TIMER)) {
      cout << "No se pudo inicializar SDL: " << SDL_GetError() << endl;
      exit(1);
    }

    SDL_Surface *screen;
    screen =  SDL_SetVideoMode(320, 240, 32, SDL_HWSURFACE|SDL_DOUBLEBUF);

    SDL_WM_SetCaption("Visualizador de video...",NULL);

    if(!screen) {
        cout << "No se pudo inicializar el modo de video... " << endl;
        return -1;
    }

    if(!peli.init("icono.avi")){
         cout << MovieSystem::getSingleton().getLastError();
         return -1;
    }

    peli.stretchToFit();

   //Para estirarlo a toda la pantalla (sin relacion de aspecto)
   // peli.setWidth(screen->w);
   // peli.setHeight(screen->h);

    peli.play(screen);

    SDL_Event event;
    while( peli.update() ){
        SDL_PollEvent(&event);
        switch(event.type){
            case SDL_QUIT:
                peli.stop();
                break;
            case SDL_KEYUP:
                if (event.key.keysym.sym == SDLK_SPACE ){
                    if(peli.isPlaying()){
                         peli.pause();
                    }else{
                         peli.resume();
                    }
                }else if( event.key.keysym.sym == SDLK_ESCAPE ){
                    peli.stop();
                }
                break;
            default : break;
        }
    }

    peli.dispose();
    SDL_Quit();
    return 0;
}
