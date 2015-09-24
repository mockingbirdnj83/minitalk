/*
** decrypt.c for decrypt in /home/aubess_t/work/semestre2/minitalk
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Sat Mar 22 11:28:38 2014 au
** Last update Sun Mar 23 23:06:13 2014 au
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <stdio.h>
#include "crypting.h"

#define SIZEOF_BUFF 1

void	my_error()
{
  my_putstr_fd(RED, 2);
  my_putstr_fd("An error occured during the system call of open().\n", 2);
  my_putstr_fd("Process aborted.\n", 2);
  my_putstr_fd(WHITE, 2);
}

void	my_read(char *key, int fd)
{
  int	i;
  char	buff[SIZEOF_BUFF];
  int	bytes;
  char	decrypted_char;

  i = 0;
  my_putstr(CYAN);
  my_putstr("\n > File decrypted :\n\n");
  while ((bytes = read(fd, buff, SIZEOF_BUFF)) != 0)
    {
      decrypted_char = ((buff[0]) ^ (key[i]));
      write(1, &decrypted_char, 1);
      i++;
      if (i > SIZEOF_KEY)
	i = 0;
    }
  my_putstr("\n\n");
  my_putstr(WHITE);
}

int	main(int argc, char **argv)
{
  int	fd;
  
  if (argc > 1)
    {
      if ((fd = open(argv[1], O_RDONLY, S_IRUSR)) == -1)
	my_error();
    }
  else
    if ((fd = open(DEFAULT_FILE, O_RDONLY, S_IRUSR)) == -1)
      my_error();
  my_read(PASS_KEY, fd);
}
