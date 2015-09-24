/*
** my_strchr.c for strchr in /home/aubess_t/work/semestre2/minishellmaster/lib/libmy
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Sun Mar  9 23:56:02 2014 au
** Last update Mon Mar 10 00:00:38 2014 au
*/

#include <stdlib.h>

char		*my_strchr(const char *s, int c)
{
  unsigned int	i;
  char		chr;

  i = 0;
  chr = c;
  if (chr == '\0')
    return ((char *)s + my_strlen(s));
  while (s[i] != chr)
    {
      if (s[i] == '\0')
	return (NULL);
      i += 1;
    }
  return ((char *)s + i);
}
