/*
** my_strtrim.c for strtrim in /home/aubess_t/work/semestre2/minishellmaster/lib/libmy
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Sun Mar  9 23:58:55 2014 au
** Last update Sun Mar  9 23:58:56 2014 au
*/

#include <stdlib.h>

char		*my_strtrim(char *s)
{
  size_t	i;
  size_t	j;
  int		space;

  if (!s)
    return (NULL);
  i = 0;
  j = 0;
  space = 1;
  while (s[i] != '\0')
    {
      if (my_isspace(s[i]) == 0)
	{
	  if (j > 0 && space == 1)
	    s[j++] = ' ';
	  space = 0;
	  s[j] = s[i];
	  j++;
	}
      else
	space = 1;
      i++;
    }
  my_bzero((s + j), i - j);
  return (s);
}
