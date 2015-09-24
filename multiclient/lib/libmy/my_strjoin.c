/*
** my_strjoin.c for strjoin in /home/aubess_t/work/semestre2/minishellmaster/lib/libmy
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Sun Mar  9 23:59:31 2014 au
** Last update Sun Mar  9 23:59:32 2014 au
*/

#include <stdlib.h>

char	*my_strjoin(char const *s1, char const *s2)
{
  char	*str;

  if (!s1 || !s2)
    return (NULL);
  str = (char*)malloc((my_strlen(s1) + my_strlen(s2) + 1) * sizeof(char));
  if (str == NULL)
    return (NULL);
  my_strcpy(str, s1);
  my_strcat(str, s2);
  return (str);
}
