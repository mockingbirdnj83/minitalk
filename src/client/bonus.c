/*
** bonus.c for bonus in /home/aubess_t/work/semestre2/minitalk
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Thu Mar 20 18:53:40 2014 au
** Last update Sun Mar 23 22:48:28 2014 au
*/

#include "get_next_line.h"

int	check_param_bonus(int argc, char **argv)
{
  int	i;

  if (!argv[1] || !argv[2])
    my_error(1);
  if (my_str_isdigit(argv[1]))
    my_error(3);
  i = -1;
  while (++i < argc)
    if (!strcmp(argv[i], "-b"))
      return (1);
  return (0);
}

void	read_bonus(char *arg1)
{
  char	*msg;

  while (msg = get_next_line(0))
    {
      if (!my_strcmp(msg, "exit"))
	exit(0);
      client(arg1, msg);
      if (msg)
	free(msg);
    }
  if (msg)
    free(msg);
}
