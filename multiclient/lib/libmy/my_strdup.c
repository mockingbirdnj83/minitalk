/*
** my_strdup.c for strdup in /home/aubess_t/work/semestre2/minishellmaster/lib/libmy
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Sun Mar  9 23:56:36 2014 au
** Last update Sun Mar  9 23:56:36 2014 au
*/

#include <stdlib.h>

char		*my_strdup(const char *s)
{
  unsigned int	i;
  char		*cpy;
  
  if (!s)
    return (NULL);
  i = -1;
  cpy = (char *)malloc((my_strlen(s) + 1) * sizeof(*cpy));
  if (cpy != NULL)
    {
      while (s[++i])
	cpy[i] = s[i];
      cpy[i] = '\0';
    }
  return (cpy);
}
