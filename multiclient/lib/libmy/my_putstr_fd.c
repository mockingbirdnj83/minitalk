/*
** my_putstr_fd.c for putstr_fd in /home/aubess_t/work/semestre2/minishellmaster/lib/libmy
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Sun Mar  9 23:55:40 2014 au
** Last update Sun Mar  9 23:55:40 2014 au
*/

#include <unistd.h>

void    my_putstr_fd(char const *s, int fd)
{
  if (!s || !fd)
    return ;
  write(fd, s, my_strlen(s));
}
