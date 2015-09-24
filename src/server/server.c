/*
** main.c for main in /home/aubess_t/work/semestre2/minitalk/src/server
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Wed Mar 12 17:38:28 2014 au
** Last update Sat Mar 22 20:51:24 2014 au
*/

#include "main.h"

t_current	g_current;

int	server(int argc, char **argv)
{
  check_params(argc, argv);
  signal_init();
  struct_init(argc, argv);
  print_pid();
  while (ASTEK)
    if (CLIENT == IN_PROCESS)
      while (CLIENT == IN_PROCESS && TIMEOUT++)
	if (CLIENT == IN_PROCESS && TIMEOUT > TIMED_OUT)
	  timeout();
}
