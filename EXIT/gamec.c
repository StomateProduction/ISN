#include <stdlib.h>

#include <stdio.h>

#include <SDL.h>

#include <SDL_image.h>

#include "const.h"

#include "gamec.h"



void gamec(SDL_Surface* screen)

{

    SDL_Surface *gamecs;

    SDL_Event event;

    gamecs = IMG_Load("L0.png");

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

    SDL_Flip(screen);

    gamecs = IMG_Load("L1.png");

    SDL_Flip(screen);

    gamecs = IMG_Load("L2.png");

    SDL_Flip(screen);

    gamecs = IMG_Load("L3.png");

    SDL_Flip(screen);

    gamecs = IMG_Load("L4.png");

    SDL_Flip(screen);
//fonction d'execution d'un programme à faire.



    SDL_FreeSurface(gamecs);

}
