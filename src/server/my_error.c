/*
** my_error.c for my_error in /home/aubess_t/work/semestre2/minitalk
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Thu Mar 13 00:03:55 2014 au
** Last update Sun Mar 23 22:51:23 2014 au
*/

#include "../minitalk.h"

void	server_usage()
{
  my_putstr(GREY);
  my_putstr("\n\t\t< SERVER USAGE >\n");
  my_putstr("\t  ./bin [-g] [-e]\n\n");
  my_putstr("\t  => ./bin : executable pathname\n");
  my_putstr("\t  => -g    : Graphics option\n");
  my_putstr("\t  => -e    : Crypting option\n\n");
  my_putstr(WHITE);
}

void	signal_error()
{
  my_putstr(RED);
  my_putstr("An error occured during the system call of signal().\n");
  my_putstr("Process aborted.\n");
  my_putstr(WHITE);
}

void	open_error()
{
  my_putstr(RED);
  my_putstr("An error occured during the system call of open()\n");
  my_putstr("Process aborted.\n");
  my_putstr(WHITE);
}

void	my_error(int key)
{
  if (key == 1)
    server_usage();
  else if (key == 2)
    signal_error();
  else if (key == 6)
    open_error();
  exit(0);
}
