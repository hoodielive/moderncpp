#include <SDL.h>

SDL_Window* g_pWindow = 0;
SDL_Renderer* g_pRenderer = 0;

int main(int argc, char* args[])
{
    // initialize sdl

    if (SDL_Init(SDL_INIT_EVERYTHING) >= 0)
    {
        // if suceeded create our window

        g_pWindow = SDL_CreateWindow("Setting up.", 
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 
        640, 480, SDL_WINDOW_SHOWN);

        // if the window creation succeeded create our renderer

        if (g_pWindow != 0)
        {
            g_pRenderer = SDL_CreateRenderer(g_pWindow, -1, 0);
        }
    }
    else
    {
        return 1; // sdl could not initialize
    }

    // everything succeeded lets draw the window
    // set to black // this function expects Red, Green and Blue
    // Alpha as color values

    SDL_SetRenderDrawColor(g_pRenderer, 0, 0, 0, 255);

    // Clear the window the black.
    
    SDL_RenderClear(g_pRenderer);

    // Show the window.

    SDL_RenderPresent(g_pRenderer);

    // Set a delay before quitting.

    SDL_Delay(5000);

    // Clean up SDL.

    SDL_Quit();

    return 0;
}