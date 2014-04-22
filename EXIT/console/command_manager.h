#ifndef COMMAND_MANAGER_H_
# define COMMAND_MANAGER_H_

struct command
{
  char	*name;
  int	(*func)(char **command, int **map);
};

int	call_command(struct command **command_list, char **command, int **map);

#endif
