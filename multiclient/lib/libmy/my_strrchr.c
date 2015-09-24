/*
** my_strrchr.c for strrchr in /home/aubess_t/work/semestre2/minishellmaster/lib/libmy
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Sun Mar  9 23:58:11 2014 au
** Last update Sun Mar  9 23:58:12 2014 au
*/

#include <stdlib.h>

char		*my_strrchr(const char *s, int c)
{
  size_t	i;
  char		chr;
  char		*ptr;

  i = 0;
  chr = c;
  ptr = NULL;
  if (chr == '\0')
    return ((char *)s + my_strlen(s));
  while (s[i] != '\0')
    {
      if (s[i] == c)
	ptr = (char *)s + i;
      i += 1;
    }
  return (ptr);
}
