/*
** check_params.c for check_params in /home/aubess_t/work/semestre2/minitalk/src/server
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Sat Mar 22 20:34:03 2014 au
** Last update Sun Mar 23 22:33:38 2014 au
*/

#include "main.h"
#include "extern.h"

void	check_params(int argc, char **argv)
{
  int	i;
  int	j;

  if (argc > 4)
    my_error(3);
  i = -1;
  while (++i < argc)
    {
      if (!strcmp(argv[i], "-e"))
	ENCRYPT = 1;
      if (!strcmp(argv[i], "-g"))
	GRAPHICS = 1;
    }
}
