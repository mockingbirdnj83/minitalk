/*
** my_error.c for my_error in /home/aubess_t/work/semestre2/minitalk
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Thu Mar 13 00:03:55 2014 au
** Last update Sun Mar 23 22:51:04 2014 au
*/

#include "../minitalk.h"

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

void	kill_error()
{
  my_putstr(RED);
  my_putstr("An error occured during the system call of kill().\n");
  my_putstr("Process aborted.\n");
  my_putstr(WHITE);
}

void	my_error(int key)
{
  if (key == 1)
    client_usage();
  else if (key == 2)
    kill_error();
  else if (key == 3)
    wrong_param();
  exit(0);
}
