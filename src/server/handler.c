/*
** handler.c for handler in /home/aubess_t/work/semestre2/minitalk
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Thu Mar 20 17:56:43 2014 au
** Last update Sun Mar 23 23:05:01 2014 au
*/

#include <sys/types.h>
#include "handler.h"

void	handler_check_process()
{
  if (CLIENT == NONE)
    {
      CLIENT = IN_PROCESS;
      if (GRAPHICS)
	{
	  my_putstr(GREEN);
	  my_putstr("\nNew message incoming :\n");
	  my_putstr(WHITE);
	}
    }
}

void	handler_full()
{
  if (ENCRYPT)
    crypt(C);
  if (C == '\0')
    {
      my_putchar('\n');
      CLIENT = NONE;
      if (ENCRYPT)
	close(FD);
      if (GRAPHICS)
	{
	  my_putstr(CYAN);
	  my_putstr("\n > Encrypting : DONE\n\n");
	  my_putstr(WHITE);
	}
    }
  else
    my_putchar(C);
  C = 0;
  OFF = 0;
}

void	handler(int signum)
{
  int	bit;
  
  TIMEOUT = 0;
  handler_check_process();
  bit = (signum == SIGUSR1 ? 1 : 0);
  C += (bit << OFF++);
  if (OFF > 7)
    handler_full();
}
