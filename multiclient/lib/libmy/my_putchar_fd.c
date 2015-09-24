/*
** my_putchar_fd.c for putchar_fd in /home/aubess_t/work/semestre2/minishellmaster/lib/libmy
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Sun Mar  9 23:55:15 2014 au
** Last update Sun Mar  9 23:55:16 2014 au
*/

#include <unistd.h>

void	my_putchar_fd(char c, int fd)
{
  if (c && fd)
    write(fd, &c, 1);
}
