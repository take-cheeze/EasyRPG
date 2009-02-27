#include <iostream>

#include "../include/Movie.h"


using namespace std;

Movie peli;

int main(int argc, char *argv[]){
     //Aqui se almacenara informacion sobre el formato del archivo...

    if(SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_TIMER)) {
      cout << "No se pudo inicializar SDL: " << SDL_GetError() << endl;
      exit(1);
    }

    SDL_Surface *screen;
    screen =  SDL_SetVideoMode(800, 600, 32, SDL_HWSURFACE|SDL_DOUBLEBUF);

    SDL_WM_SetCaption("Visualizador de video...",NULL);

    if(!screen) {
        cout << "No se pudo inicializar el modo de video... " << endl;
        return -1;
    }

    if(!peli.init("icono.avi")){
         cout << MovieSystem::getSingleton().getLastError();
         return -1;
    }

 //   peli.stretchToFit();

    peli.play(screen,100,100);
    peli.dispose();

    SDL_Quit();
    return 0;
}
