#include <stdlib.h>
#include <stdio.h>
#include <SDL.h>
#include <SDL_image.h>
#include "const.h"
#include "editor.h"

void editor(SDL_Surface* screen)
{
    SDL_Surface *ndy;
    SDL_Event event;
    ndy = IMG_Load("NDY.jpeg");
    int	quit = 1;

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
    SDL_FreeSurface(ndy);
}
