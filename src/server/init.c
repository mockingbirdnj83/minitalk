/*
** init.c for init in /home/aubess_t/work/semestre2/minitalk/src/server
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Thu Mar 20 17:31:53 2014 au
** Last update Sun Mar 23 23:07:19 2014 au
*/

#include "init.h"

void	signal_init()
{
  usleep(500);
  if (signal(SIGUSR1, handler) == SIG_ERR)
    my_error(1);
  if (signal(SIGUSR2, handler) == SIG_ERR)
    my_error(1);
}

void	struct_init(int argc, char **argv)
{
  CLIENT = NONE;
  TIMEOUT = 0;
  OFF = 0;
  C = 0;
  KEY = SEGFAULT;  
}
