#include "player.h"

Player::Player() {

    setLog(VERBOSITY_ALL);

    /* Defining this handler we avoid checking NULL for new
       allocs in the heap */
    std::set_new_handler(_bad_alloc);

    int flags = SDL_INIT_TIMER;

#ifdef _DEBUG
    flags |= SDL_INIT_NOPARACHUTE;
#endif

	// Initialize SDL
	if (SDL_Init(flags) < 0)
    {
        // Error
		log(ERROR_LEVEL_ERROR, "Init error:");
		log(ERROR_LEVEL_ERROR, SDL_GetError());
    }

	// Disable Mouse Cursor
	SDL_ShowCursor(SDL_DISABLE);

	// Start Graphics
	Graphics::initialize();

    Input::initialize();

    if (!Audio::initialize()) {
        _fatal_error("Couldn't initialise audio!");
    }
}


Player::~Player() {
    Main_Data::cleanup();
	// Quit SDL
	SDL_Quit();
}

void Player::do_play() {

	// Create Scene Title
	Main_Data::scene = new Scene_Title();

	// Main loop
	while (Main_Data::scene_type != SCENE_NULL)
	{
		Main_Data::scene->main_function();
	}
}

void Player::set_args(int _argc, char *_argv[]) {
    argc = _argc;
    argv = _argv;
}