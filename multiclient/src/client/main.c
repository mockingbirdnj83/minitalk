/*
** main.c for main in /home/aubess_t/work/semestre2/minitalk/src/client
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Wed Mar 12 17:38:01 2014 au
** Last update Sun Mar 23 23:25:32 2014 au
*/

#include <sys/types.h>
#include <sys/signal.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include "../minitalk.h"

char	*my_strcat(char *dest, const char *src);

typedef struct	s_message
{
  char		*msg;
  int		i;
  pid_t		server_pid;
}		t_message;

t_message g_msg;

void	decompose(char c)
{
  char	off;
  
  off = -1;
  while (++off < 8)
    {
      usleep(1000);
      if (((c >> off) & 1) == 1)
	{
	  if (kill(g_msg.server_pid, SIGUSR1) == -1)
	    my_error(1, 1);
	}
      else
	if (kill(g_msg.server_pid, SIGUSR2) == -1)
	  my_error(1, 2);
    }
}

void		handler()
{
  decompose(g_msg.msg[g_msg.i]);
  g_msg.i++;
}

void	struct_init(char *pid, char *message)
{
  char	*end;

  if (!(end = malloc(sizeof(char) * 2)))
    my_error(4, 3);
  end[0] = -1;
  end[1] = 0;
  if (!(g_msg.msg = malloc(sizeof(char) * my_strlen(message) + 2)))
    my_error(4, 4);
  g_msg.msg = my_strcpy(g_msg.msg, message);
  g_msg.msg = my_strcat(g_msg.msg, end);
  if (end)
    free(end);
  if (my_str_isdigit(pid))
    my_error(3, 5);
  g_msg.server_pid = (pid_t)my_atoi(pid);
  g_msg.i = 0;
}

void	signal_init()
{
  usleep(1000);
  if (signal(SIGUSR1, handler) == SIG_ERR)
    my_error(1, 6);
}

int	main(int argc, char **argv)
{
  my_printf("MY_PID : %d\n", getpid());
  if (argc < 3)
    my_error(2, 8);
  struct_init(argv[1], argv[2]);
  signal_init();
  if (kill(g_msg.server_pid, SIGUSR2) == -1)
    my_error(1, 7);
  while (g_msg.msg[g_msg.i])
    pause();
}
