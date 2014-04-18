/// FMODLOAD.C

 #include <fmod.h>

void	initFMOD() //Utilise une variable menu (mise dans le main) pour changer de musique
{
  FMOD_SYSTEM *system;
  FMOD_SOUND *music;
  FMOD_RESULT open; 
    FMOD_System_Create(&system);  
    FMOD_System_Init(system, 1, FMOD_INIT_NORMAL, NULL);

    switch(SELECT) //Ouvre la musique
    {
	case 1:
	 open = FMOD_System_CreateSound(system, "1.mp3", FMOD_SOFTWARE | FMOD_2D | FMOD_CREATESTREAM, 0, &music);
	break;
	      case 2:
	       open = FMOD_System_CreateSound(system, "2.mp3", FMOD_SOFTWARE | FMOD_2D | FMOD_CREATESTREAM, 0, &music);
	      break;
	            case 3:
	             open = FMOD_System_CreateSound(system, "3.mp3", FMOD_SOFTWARE | FMOD_2D | FMOD_CREATESTREAM, 0, &music);
		    break;
    }    
        if (resultat != FMOD_OK)
        {
         fprintf(stderr, "ERROR 42 : THE MP3 COULDN'T BE LOADED \n(try again or put the MP3 in the right folder)\n");
         exit(EXIT_FAILURE);
        }
  FMOD_Sound_SetLoopCount(music, -1); // INFINITY
  FMOD_System_PlaySound(system, FMOD_CHANNEL_FREE, music, 0, NULL); //PLAY
}


