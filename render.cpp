#include "render.h"

Application* initSdlOpengl()
{
	Application* application = new Application;

   	SDL_Init(SDL_INIT_VIDEO);

	SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 4);
 	SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 1);
 	SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
 	SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
 	SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);

 	application->gWindow = SDL_CreateWindow("OpenGL Example", SCREEN_START_POS_X, SCREEN_START_POS_Y, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN | SDL_WINDOW_OPENGL);

 	application->context = SDL_GL_CreateContext(application->gWindow);
 	gladLoadGLLoader(SDL_GL_GetProcAddress);

	return application;
}
