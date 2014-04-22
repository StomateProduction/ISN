#include <stdlib.h>

#include "rpg.h"

#include "my_lib.h"

#include "command_manager.h"



int	my_wordtablen(char **wordtab)

{

  int	i;



  i = 0;

  while (wordtab[i] != 0)

    ++i;

  return (i);

}



void	my_show_wordtab(char **str_tab)

{

  int	i;



  i = 0;

  while (str_tab[i] != '\0')

    {

      my_putstr(str_tab[i]);

      my_putchar('\n');

      i++;

    }

}



int	command_move(char **command, int **map)

{

  my_putstr("test\n");

  return (0);

}



int main(void)

{

  int	i;

  char	**array;

  int	**map;

  struct command	**command_list;

  char	**wordtab;

  i = 0;



  array = (char**)malloc(sizeof(char*) * 9);

  while (i < 9)

    {

      array[i] = (char*)malloc(sizeof(char) * 9);

      i++;

    }

  map = (int**) xamalloc(sizeof (int), 10, 10);

  command_list = (struct command**) xamalloc(sizeof (struct command), 2, 1);

  free(command_list[1]);

  command_list[0]->name = "move";

  command_list[0]->func = command_move;

  command_list[1] = 0;

  wordtab = my_str_to_wordtab("move up");

  call_command(command_list, wordtab, map);



  wallGenerator(array);

  mapGenerator(array);

  printArray(array);

  free(array);

  afree((void**) wordtab, my_wordtablen(wordtab));

  afree((void**) command_list, 1);

  afree((void**) map, 10);

  return (0);

}
