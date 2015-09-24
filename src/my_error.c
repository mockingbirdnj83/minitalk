/*
** my_error.c for my_error in /home/aubess_t/work/semestre2/minitalk
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Thu Mar 13 00:03:55 2014 au
** Last update Sun Mar 23 22:43:52 2014 au
*/

#include "minitalk.h"
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdio.h>

void	wrong_param()
{
  my_putstr(RED);
  my_putstr("\n\tWRONG PARAMETERS >\n");
  my_putstr("\t server_pid must be only numbers characters.\n\n");
  my_putstr(WHITE);
}

void	client_usage()
{
  my_putstr(GREY);
  my_putstr("\n\t\t< CLIENT USAGE >\n");
  my_putstr("\t  ./bin server_pid [message | -b]\n\n");
  my_putstr("\t  => ./bin      : executable pathname\n");
  my_putstr("\t  => server_pid : positive number refering to the");
  my_putstr("server's process id\n");
  my_putstr("\t  => -b         : BONUS OPTION\n\n");
  my_putstr(WHITE);
}

void	client_usage()
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

void	open_failed()
{
  my_putstr(RED);
  my_putstr("ololo open failed ololo\n");
  my_putstr(sys_errlist[errno]);
  my_putstr(WHITE);
}

void	my_error(int key)
{
  if (key == 1)
    signal_error();
  else if (key == 2)
    client_usage();
  else if (key == 3)
    server_usage();
  else if (key == 4)
    wrong_param();
  else if (key == 5)
    malloc_failed();
  else if (key == 6)
    open_failed();
  exit(0);
}
