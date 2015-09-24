/*
** my_memalloc.c for memalloc in /home/aubess_t/work/semestre2/minishellmaster/lib/libmy
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Sun Mar  9 23:54:41 2014 au
** Last update Sun Mar  9 23:54:42 2014 au
*/

#include <stdlib.h>

void	*my_memalloc(size_t size)
{
  char	*ptr;

  if (size <= 0)
    return (NULL);
  ptr = (char *)malloc(size * sizeof(*ptr));
  return ((void *)ptr);
}
