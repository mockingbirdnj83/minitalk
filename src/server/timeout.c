/*
** timeout.c for timeout in /home/aubess_t/work/semestre2/minitalk/src/server
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Thu Mar 20 18:22:57 2014 au
** Last update Thu Mar 20 18:23:52 2014 au
*/

#include "../minitalk.h"

void	timeout()
{
  my_putstr(RED);
  my_putstr("\n\n > Client timed out... Please call an Astek.\n\n");
  my_putstr(WHITE);
  struct_init();
}
