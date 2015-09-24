/*
** main.c for main in /home/aubess_t/work/semestre2/minitalk/src/server
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Wed Mar 12 17:38:28 2014 au
** Last update Sun Mar 23 23:33:03 2014 au
*/

#include <sys/types.h>
#include <sys/signal.h>
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include "../minitalk.h"

t_elem	*g_client = NULL;

t_elem		*my_create_elem(pid_t client_pid)
{
  static int	id = 0;
  t_elem	*new_element;

  if (!(new_element = (t_elem*)malloc(sizeof(t_elem))))
    return (NULL);
  new_element->next = NULL;
  new_element->prev = NULL;
  new_element->id = id;
  new_element->client_data.pid = client_pid;
  new_element->client_data.c = 0;
  new_element->client_data.i = 0;
  new_element->client_data.flag = 0;
  new_element->client_data.message = NULL;
  id++;
  return (new_element);
}

t_elem		*my_add_client(pid_t client_pid)
{
  t_elem	*tmp;
  t_elem	*new_client;
  
  tmp = g_client;
  if (!(new_client = my_create_elem(client_pid)))
    return (NULL);
  if (g_client == NULL)
    g_client = new_client;
  else if (!tmp->next)
    {
      new_client->prev = tmp;
      new_client->next = tmp;
      tmp->prev = new_client;
      tmp->next = new_client;
    }
  else
    {
      while (tmp->next->id != 0)
	tmp = tmp->next;
      new_client->prev = tmp;
      new_client->next = tmp->next;
      tmp->next->prev = new_client;
      tmp->next = new_client;
    }
  return (new_client);
}

void	one_left(t_elem *tmp, int client_pid)
{
  if (tmp->client_data.pid == client_pid)
    {
      free(tmp);
      g_client = NULL;
    }
}

void	two_left(t_elem *tmp)
{
  g_client = tmp->next;
  tmp->next->prev = NULL;
  tmp->next->next = NULL;
}

void	more_than_two(t_elem *tmp)
{
  g_client = tmp->next;
  tmp->prev->next = tmp->next;
  tmp->next->prev = tmp->prev;
}
void	my_remove_client(pid_t client_pid)
{
  t_elem	*tmp;

  if (g_client)
    {
      tmp = g_client;
      if (!tmp->next)
	one_left(tmp, client_pid);
      else
	while (tmp->next->id != 0)
	  {
	    if (tmp->client_data.pid == client_pid)
	      {
		if (tmp->next->next == tmp)
		  two_left(tmp);
		else
		  more_than_two(tmp);
		free(tmp);
		return;
	      }
	    tmp = tmp->next;
	  }
    }
}

t_elem	*check_client(pid_t client_pid)
{
  t_elem	*tmp;
 
  if (!g_client)
    return (NULL);
  tmp = g_client;
  if (tmp->next)
    {
      while (tmp->next->id != 0)
	{
	  if (tmp->client_data.pid == client_pid)
	    return (tmp);
	  tmp = tmp->next;
	}
      if (tmp->client_data.pid == client_pid)
	return (tmp);      
    }
  else
    if (tmp->client_data.pid == client_pid)
      return (tmp);
  return (NULL);
}

void add_to_message(t_elem *client)
{
  int	sizeof_message;
  char	*new_message;
  char	c;
  char	*message;

  c = client->client_data.c;
  message = client->client_data.message;
  sizeof_message = my_strlen(client->client_data.message);
  if (!(new_message = my_strnew(sizeof_message + 1)))
    my_error(4, 7);
  if (client->client_data.message)
    my_strcpy(new_message, client->client_data.message);
  if (client->client_data.message)
    free(client->client_data.message);
  new_message[sizeof_message] = c;
  new_message[sizeof_message + 1] = 0;
  client->client_data.message = new_message;
}

void	recompose(int signum, t_elem *client)
{
  int	bit;

  if (signum == SIGUSR1)
    bit = 1;
  else if (signum == SIGUSR2)
    bit = 0;
  client->client_data.c += (bit << (client->client_data.i)++);
  if (client->client_data.i > 7)
    {
      client->client_data.flag = 1; 
     if (client->client_data.c == -1)
	{
	  my_putstr(client->client_data.message);
	  my_putchar('\n');
	  my_remove_client(client->client_data.pid);
	}
      else
        add_to_message(client);
      client->client_data.c = 0;
      client->client_data.i = 0;
    }
}

void		handler(int signum, siginfo_t *strct, void *ucontext)
{
  t_elem		*client;
  
  if (signum != SIGUSR1 && signum != SIGUSR2)
    my_error(1, 1);
  if (!(client = check_client(strct->si_pid)) &&
      signum == SIGUSR2)
    {
      if (!(client = my_add_client(strct->si_pid)))
	my_error(4, 2);
    }
  else
    recompose(signum, client);
}

struct sigaction	*act_init(struct sigaction *act)
{
  if (!(act = malloc(sizeof(*act))))
    return (NULL);
  act->sa_flags = SA_SIGINFO;
  act->sa_sigaction = handler;
  return (act);
}

void	signal_init(const struct sigaction *act)
{
  usleep(1000);
  if (sigaction(SIGUSR1, act, NULL) == -1)
    my_error(1, 3);
  if (sigaction(SIGUSR2, act, NULL) == -1)
    my_error(1, 4);
}

void	print_pid(pid_t server_pid)
{
  my_printf("SERVER'S PID : %d\n", server_pid);
}

void	call_next_client(int pid)
{
  t_elem	*tmp;

  while (-1)
    {
      if (g_client)
	{
	  tmp = g_client;
	  while (tmp)
	    {
	      if (kill(tmp->client_data.pid, SIGUSR1) == -1)
		my_error(1, 5);
	      while (tmp->client_data.flag != 1)
		pause();
	      tmp->client_data.flag = 0;
	      tmp = tmp->next;
	    }
	}
    }
}

int			main()
{
  struct sigaction	*act;

  if (!(act = act_init(act)))
    my_error(4, 6);
  signal_init(act);
  print_pid(getpid());
  call_next_client(getpid());
}
