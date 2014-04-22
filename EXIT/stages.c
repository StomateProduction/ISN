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

    stagess = IMG_Load("stagess.png");

    int quit = 1;



    while (quit)

    {

        SDL_WaitEvent(&event);

	switch(event.type)

        {

            case SDL_QUIT:

                quit = 0;

                break;

                     switch(event.key.keysym.sym)

                     {

                      case SDLK_ESCAPE:

                          quit = 0;

                          break;

			       case SDLK_RIGHT:

			           stagess = IMG_Load("stagess2.png");

			           SDL_Flip(screen);

			           break;

			       case SDLK_PAGEDOWN:

			           stagess = IMG_Load("stagess2.png");

			           SDL_Flip(screen);

			           break;

			                case SDLK_LEFT:

			                    stagess = IMG_Load("stagess.png");

			                    SDL_Flip(screen);

			                    break;

			                case SDLK_PAGEUP:

			                    stagess = IMG_Load("stagess.png");

			                    SDL_Flip(screen);

			                    break;

						 case SDLK_KP1:

		       			             SELECT = 1;

                                                     game(screen);

                                                     break;					 

		     }

	}

    }

    SDL_FreeSurface(stagess);

}
