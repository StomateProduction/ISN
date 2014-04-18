#include <stdlib.h>
#include <stdio.h>
#include <SDL.h>
#include <SDL_image.h>
#include "const.h"
#include "stages.h"

void stages(SDL_Surface* screen)
{
    SDL_Surface *stagess;
    SDL_Event event;
    stagess = IMG_Load("NDY.jpeg");
    int quit = 1;

    while (quit)
    {
        SDL_WaitEvent(&event);
	switch(event.type)
        {
            case SDL_QUIT:
                quit = 0;
                break;
	}
    }
    SDL_FreeSurface(stagess);
}
