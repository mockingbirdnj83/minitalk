/*
** my_strsub.c for strsub in /home/aubess_t/work/semestre2/minishellmaster/lib/libmy
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Sun Mar  9 23:58:44 2014 au
** Last update Sun Mar  9 23:58:44 2014 au
*/

#include <stdlib.h>

char		*my_strsub(char const *s, unsigned int start, size_t len)
{
  size_t	i;
  char		*str;

  if (!s)
    return (NULL);
  str = (char *)malloc((len + 1) * sizeof(*str));
  if (str == NULL)
    return (NULL);
  i = 0;
  while (i < len && s[(size_t)start + i] != '\0')
    {
      str[i] = s[(size_t)start + i];
      i++;
    }
  str[i] = '\0';
  return (str);
}
