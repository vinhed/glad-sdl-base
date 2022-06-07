#pragma once

#include <SDL.h>
#include "glad/glad.h"

#define SCREEN_START_POS_X	100
#define SCREEN_START_POS_Y	100
#define SCREEN_WIDTH		1280
#define SCREEN_HEIGHT		720

struct Application
{
	SDL_Window* gWindow = nullptr;
	SDL_GLContext context = NULL;
	bool gameIsRunning = true;
};

Application* initSdlOpengl();