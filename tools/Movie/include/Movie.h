#ifndef MOVIE_H_INCLUDED
#define MOVIE_H_INCLUDED
/*
*   Basado en el tutorial de FFMPEG por Stephen Dranger en
*                           http://www.dranger.com/ffmpeg/
*/

#include <cstring>

#include <sys/timeb.h>

//Librerias en C
#ifdef __cplusplus
extern "C"{
#endif
    //SDL
    #include <SDL/SDL.h>
    #include <SDL/SDL_thread.h>
    //FFMPEG
    #include <libavcodec/avcodec.h>
    #include <libavformat/avformat.h>
    #include <libswscale/swscale.h>


#ifdef __cplusplus
}
#endif

/**
    Calcula la diferencia (en milisegundos) entre los valores de tiempo \p end y
    \p start, tomados por medio de la función ftime().
    @param end tiempo final de la temporización
    @param start tiempo inicial de la temporización
*/
long diffTimeb(timeb end, timeb start);

/** Clase que se encarga que controlar lo referente a un archivo de video. Diseñado
    para mostrarlo en una superficie SDL.
    @note
        Todas las funciones notifican a la clase MovieSystem de los errores
        ocurridos por lo que, en caso de uno, se puede obtener la información
        del mismo por medio de MovieSystem::getLastError().
*/
class Movie {
    public:
        /// Constructor de la clase, inicializa las variables internas.
        Movie();

        /** Inicializa el objeto con el archivo de video especificado por
            el parámetro \p nombre.
            @param nombre El nombre y ubicación del archivo de video a cargar
            @return true si la operación tuvo éxito o false en caso contrario.
        */
        bool init(std::string nombre);

        /** Prepara la acción de reproducir el video en la superficie \p scr
            en la posición  \p x y \p y seleccionada. Necesita de llamadas a la
            función miembro update(), ya que no inicia ciclo de dibujado autónomo.
            @param scr Puntero a una superficie SDL_Surface válida donde se desea
            renderizar el video.
            @param x Posición horizontal en la superficie
            @param y Posición vertical en la superficie
            @return true en caso de éxito o false si ha ocurrido un error.
            @see update()
        */
        bool play(SDL_Surface *scr, Sint16 x=0, Sint16 y=0);

        /** Detiene la reproducción del video en la superficie, liberando de
            memoria los objetos creados por la función play(). Una llamada a la
            función update() retornará false luego de haberse invocado la función
            stop().
        */
        void stop();

        /** Detiene momentáneamente la reproducción del video, con el propósito
            de reanudarla posteriormente por medio de la función resume(), a
            diferencia de la función stop(), no libera la memoria reservada en la
            función play().
            Una llamada a la función update() retornará true aún luego de haber
            invocado la función pause().
            @see stop()
        */
        void pause();

        /// Reanuda la reproducción del video, detenido por medio de pause()
        void resume();

        /** Actualiza el video en la superficie SDL_Surface pasada a la función
            play().
            @return true si se logró actualizar el video o false en caso de un
            error, se haya detenido la reproducción por medio de stop() o bien
            se haya acabado el video.
            @note Por medio de un temporizador interno calcula el tiempo entre
            llamadas para mantener la taza de cuadros por segundo lo mas constante
            posible, por lo que las llamadas a esta funcion deben ser frecuentes.
            En caso de colocarse en un ciclo con mucho retardo podría notarse
            alteraciónes en la fluidez del video. En ese caso sería recomendable
            utilizar hilos.
            @see play()
        */
        bool update();

        /** Devuelve el estado del video, indicando si se está reproduciendo
            actualmente.
            @return false si se encuentra detenido, true si se está reproduciendo.
        */
        bool isPlaying();

        /** Utiliza la salida estándar (normalmente la consola) para imprimir la
            información del video cargado. Su fin es unicamente para Debug.
        */
        void dumpFormat();

        /**
            Libera toda la memoria asignada al video y prepara el objeto para ser
            borrado o cargar un nuevo video.
        */
        void dispose();

        /** Obtiene el ancho del video original (no la superficie SDL).
            @return ancho del video en píxeles
        */
        int originalWidth();

        /** Obtiene el alto del video original (no la superficie SDL).
            @return alto del video en píxeles
        */
        int originalHeight();

        /** Obtiene el ancho actual del video, cambiado por la función setWidth()
            @return ancho del video en píxeles
            @see setWidth()
        */
        int width();

        /** Obtiene el alto actual del video, cambiado por la función setHeight()
            @return alto del video en píxeles
            @see setHeight()
        */
        int height();

        /** Cambia el ancho del video por \p w, tal cual será mostrado en la
            superficie SDL, únicamente es efectiva si se llama antes de la función
            play().
            @param w ancho en píxeles del video.
        */
        void setWidth(int w);

        /** Cambia el alto del video por \p h, tal cual será mostrado en la
            superficie SDL, únicamente es efectiva si se llama antes de la función
            play().
            @param h alto en píxeles del video.
        */
        void setHeight(int h);

        /** Función que indica si el video debe estirarse para ser ajustado a la
            superficie SDL, manteniendo su relación de aspecto. Debe ser llamada
            antes de la función play(). Ignora los valores de width y height puestos
            por las funciones setWidth() y setHeight(), así como la posición x,y
            pasada a play() como parámetro.
            @param estirar true (default) o false
        */
        void stretchToFit(bool estirar=true);


    private:
    //Funciones:                        //esta funcion realiza el volcado de un frame a la superficie SDL
        void renderFrame();

    //Variables de FFMPEG
        AVFormatContext *pFormatCtx;    //Información sobre el formato de archivo utilizado
        AVCodecContext *pCodecCtx;      //Información sobre el codec utilizado..
        AVCodec *pCodec;                //Puntero a un codec especifico
        AVFrame *pFrame;                //Puntero al Frame sin procesar...
        AVPacket packet;                //paquete a ser leido
        struct SwsContext* swsC;
        double timebase;
        int frameFinished;              // indica si se terminó de cargar el frame y debe ser dibujado
                                        // nota: al dibujarse el frame esto pasará a 0 para indicar que se debe
                                        //       cargar un nuevo frame.

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

    //Temporizacion
        timeb frameTime;
        timeb currentTime;
};


/** Clase que se encarga de cargar los codecs de video, así como controlar los
    errores que se puedan generar en la ejecución de algún video.
    @note Esta clase no debe ser instanciada por el usuario ya que únicamente
    debe existir un objeto de esta clase, el cual es creado dentro de la
    declaración de la misma. En su lugar se deben utilizar las funciónes
    estáticas MovieSystem *getSingletonPtr(); y MovieSystem &getSingleton();
    para obtener el objeto MovieSystem.
*/
class MovieSystem {
    public:

        ///Constructor de la clase, carga todos los codecs de video disponibles.
        MovieSystem();

        /** Actualiza LastErrorString con el ultimo error ocurrido, para obtener
            la información del error utilizar getLastError();
            @param error Cadena de texto que describe el error ocurrido.
        */
        void setError(const char *error);

        /** Devuelve la descripción del último error ocurrido, almacenado en
            LastErrorString.
            @return Descripción del error.
            @see setError();
        */
        std::string &getLastError();

        //Estas 2 funciones estaticas son con el fin de obtener el objeto MovieSystem
        /** Obtiene el objeto MovieSystem
            @return puntero al objeto MovieSystem
        */
        static MovieSystem *getSingletonPtr();

        /** Obtiene el objeto MovieSystem
            @return referencia al objeto MovieSystem
        */
        static MovieSystem &getSingleton();

    private:
        static MovieSystem myself;
        std::string LastErrorString;
};
#endif // MOVIE_H_INCLUDED
