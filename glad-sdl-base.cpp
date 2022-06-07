#include "include.h"


int main(int argc, char* argv[])
{
    Application* application = initSdlOpengl();

    bool gameIsRunning = true;
    while (gameIsRunning)
    {
        SDL_PumpEvents();

        glViewport(SCREEN_START_POS_X, SCREEN_START_POS_Y, SCREEN_WIDTH, SCREEN_HEIGHT);
        glClearColor(1.0f, 0.0f, 0.0f, 1.0f);
        glClear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
        SDL_GL_SwapWindow(application->gWindow);
    }

    SDL_DestroyWindow(application->gWindow);
    SDL_Delay(1000);
    SDL_Quit();

    return 0;
}
