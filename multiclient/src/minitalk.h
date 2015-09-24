/*
** minitalk.h for minitalk in /home/aubess_t/work/semestre2/minitalk
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Thu Mar 13 03:16:00 2014 au
** Last update Mon Mar 17 16:10:22 2014 au
*/

#ifndef MINITALK_H_
# define MINITALK_H_

# define GREEN	        "\033[1;32m"
# define CYAN		"\033[0;36m"
# define CYAN_BRIGHT	"\033[1;36m"
# define WHITE		"\033[0m"
# define RED		"\033[1;31m"
# define GREY		"\033[1;37m"
# define HIDDEN		"\033[8m"

typedef struct	s_payload
{
  pid_t		pid;
  char		c;
  char		*message;
  int		i;
  int		flag;
}		t_payload;

typedef struct	s_elem
{
  t_payload	client_data;
  int		id;
  struct s_elem	*prev;
  struct s_elem *next;
}		t_elem;

char	*get_next_line(int fd);

#endif /* MINITALK_H_ */
