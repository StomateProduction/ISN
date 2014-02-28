#include <stdio.h>
#include <stdlib.h>
#include "rpg.h"

int      main(void)
{
  int	i;
  char	**array;

  i = 0;

  array = (char**)malloc(sizeof(char*) * 9);
  while (i < 9)
    {
      array[i] = (char*)malloc(sizeof(char) * 9);
      i++;
    }

  wallGenerator(array);
  mapGenerator(array);
  printArray(array);
  free(array);
  return (0);
}
