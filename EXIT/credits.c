#include <stdlib.h>
#include <stdio.h>
#include <SDL.h>
#include <SDL_image.h>
#include "const.h"
#include "credits.h"

void credits(SDL_Surface* screen)
{
    SDL_Surface *creditss;
    SDL_Event event;
    creditss = IMG_Load("credits.png");
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
    SDL_FreeSurface(creditss);
}
