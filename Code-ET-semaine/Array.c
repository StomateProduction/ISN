#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	n;

  n = 0;
  while (str[n] != '\0')
    {
      my_putchar(str[n]);
      n = n+1;
    }
}


int     wallGenerator(char **array) // remplit le tableau de "#"
{
  int	i;
  int	j;
  i = 0;
  j = 0;
  while(i<9)
    {
      j = 0;
      while(j<9)
	{    
	  array[i][j] = '#';
	  j = j+1;
	} 
      i = i+1;  
    }
  i = 0;
  j = 0;
    
}
 
int	printArray(char ** array) //affiche le tableau
{
  int	i;
  int	j;
  i = 0;
  while(i<9)
    {
      j = 0;
      while(j<9)
	{
      	  my_putchar(array[i][j]);
	  my_putstr(" ");
	  j = j+1;
	}
      my_putstr("\n");
      i = i+1;
    }
}

int	mapGenerator(char **array) // remplit le terrain de " " aléatoirement (et un coffre *) en laissant les "#" autour
{
  int   a;
  int   b;
  int	i;
  i = 0;
  srand(time(NULL));

  while (i<30)
    {
      a = (rand()%(7))+1;
      b = (rand()%(7))+1;
      array[a][b] = ' ';  //place le vide ALEATOIREMENT (ne fait pas un vrai donjon) 
      i++;
    }
  a = (rand()%(6))+2;   /* Met le coffre dans un emplacement au hasard, éloigné du  */ 
  b = (rand()%(6))+2;   /* milieu (normalement). La formule peut être modifié.   */     
 
  array[4][4] = 'X'; //Spawn (au milieu), indique donc le centre de la map.
  array[4][5] = ' '; //Permet d'avoir plusieurs chemins possibles. Libère les alentours du X
  array[5][4] = ' ';
  array[3][4] = ' ';
  array[4][3] = ' ';
  array[a][b] = '*'; // place le coffre en dernier. Il y aura forcemment le coffre.
}
