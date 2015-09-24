/*
** my_strfjoin.c for strfjoin in /home/aubess_t/work/semestre2/minishellmaster/lib/libmy
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Sun Mar  9 23:56:52 2014 au
** Last update Sun Mar  9 23:56:53 2014 au
*/

#include <stdlib.h>

char	*my_strfjoin(char const *s1, char const *s2)
{
  char	*str;

  if (!s1 || !s2)
    return (NULL);
  str = (char*)malloc((my_strlen(s1) + my_strlen(s2) + 1) * sizeof(char));
  if (str == NULL)
    return (NULL);
  my_strcpy(str, s1);
  my_strcat(str, s2);
  free((void *)s1);
  free((void *)s2);
  return (str);
}
