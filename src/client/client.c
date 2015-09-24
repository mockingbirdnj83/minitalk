/*
** main.c for main in /home/aubess_t/work/semestre2/minitalk/src/client
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Wed Mar 12 17:38:01 2014 au
** Last update Sun Mar 23 23:07:53 2014 au
*/

#include "main.h"

void	decompose(int server_pid, char c)
{
  char	off;
  
  off = -1;
  while (++off < 8)
    {
      usleep(250);
      if (((c >> off) & 1) == 1)
	{
	  if (kill(server_pid, SIGUSR1) == -1)
	    my_error(2);
	}
      else
	if (kill(server_pid, SIGUSR2) == -1)
	  my_error(2);
    }
}

void	run_message(char *arg1, char *arg2)
{
  int	server_pid;
  char	*msg;
  int	i;
  
  server_pid = my_atoi(arg1);
  msg = arg2;
  i = -1;
  while (msg[++i])
    decompose(server_pid, msg[i]);
  decompose(server_pid, msg[i]);
}

void	client(int argc, char **argv)
{
  if (argc < 3)
    my_error(1);
  if (check_param_bonus(argc, argv))
    read_bonus(argv[1]);
  else
    run_message(argv[1], argv[2]);
}
