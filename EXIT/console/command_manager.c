#include "command_manager.h"

#include "my_lib.h"



int	call_command(struct command **command_list, char **command, int **map)

{

  int	i;



  i = 0;

  while (command_list[i])

    {

      if (my_str_equals(command_list[i]->name, command[0]))

return (command_list[i]->func(command, map));

      ++i;

    }

  return (-1);

}
