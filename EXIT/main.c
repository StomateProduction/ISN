#include <stdlib.h>
#include <stdio.h>
#include <SDL.h>
#include <SDL_image.h>
#include "const.h"

int	main(int argc, char *argv[])
{
  SDL_Surface *screen = NULL, *menu = NULL;
  SDL_Rect positionMenu;
  SDL_Event event;
                  int	ok = 1;
  SDL_Init(SDL_INIT_VIDEO);
  SDL_WM_SetIcon(IMG_Load("ic.jpg"), NULL);
  screen = SDL_SetVideoMode(W_WIN, H_WIN, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
  SDL_WM_SetCaption("EXIT!", NULL);
                  menu = IMG_Load("menu.png");
                  pMenu.x = 0;
                  pMenu.y = 0;
            
     while (ok)
     {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT:
            ok = 0;
            break;
                 case SDL_KEYDOWN:
          	 switch(event.key.keysym.sym)
                 {
                  case SDLK_ESCAPE:
                  ok = 0;
                  break;
                       case SDLK_KP1:
		       SELECT = 1;
                       game(screen);
                       break;
                            case SDLK_KP2:
			    SELECT = 1;
                            gamec(screen);
                            break;
                                 case SDLK_KP3:
				 SELECT = 2;
                                 stages(screen);
                                 break;
                                      case SDLK_KP4:
				      SELECT = 2;
                                      editor(screen);
                                      break;
                                           case SDLK_KP5:
				           SELECT = 3;
                                           credits(screen);
                                           break;
                 }
        break;
        }
                   
  SDL_FillRect(screen, NULL, SDL_MapRGB(screen->format, 0, 0, 0));
  SDL_BlitSurface(menu, NULL, screen, &pMenu);
  SDL_Flip(ecran);
     }

  SDL_FreeSurface(menu);
  FMOD_Sound_Release(music);
  FMOD_System_Close(system);
  FMOD_System_Release(system);
  SDL_Quit();

    return EXIT_SUCCESS;
}

