/*
** my_error.c for my_error in /home/aubess_t/work/semestre2/minitalk
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Thu Mar 13 00:03:55 2014 au
** Last update Sun Mar 23 23:31:55 2014 au
*/

#include <stdio.h>
#include <stdlib.h>
#include "minitalk.h"

void	wrong_param(int key)
{
  my_printf("\n\tWRONG PARAMETERS > [%d]\n", key);
  my_printf("\t server_pid must be only numbers characters.\n\n");
}

void	client_usage(int key)
{
  my_printf(GREY);
  my_printf("\n\t\t< CLIENT USAGE > [%d]\n", key);
  my_printf("\t  ./bin server_pid [message | -b]\n\n");
  my_printf("\t  => ./bin      : executable pathname\n");
  my_printf("\t  => server_pid : positive number refering to the");
  my_printf("server's process id\n");
  my_printf("\t  => -b         : BONUS OPTION\n\n");
  my_printf(WHITE);
}

void	signal_error(int key)
{
  my_printf("An error occured during the system call of signal(). [%d]\n", key);
  my_printf("Process aborted.\n");
}

void	my_error(int key, int key2)
{
  if (key == 1)
    signal_error(key2);
  else if (key == 2)
    client_usage(key2);
  else if (key == 3)
    wrong_param(key2);
  exit(0);
}
