/*
** my_strnew.c for strnew in /home/aubess_t/work/semestre2/minishellmaster/lib/libmy
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Sun Mar  9 23:57:55 2014 au
** Last update Thu Mar 20 20:06:14 2014 au
*/

#include <stdlib.h>

char	*my_strnew(int size)
{
  int	i;
  int	j;
  char	*str;

  //  char dead[] = "DEADBEEF";
 
  i = 0;
  if (!(str = (char *)malloc((size + 1) * sizeof(char))))
    return (NULL);
  while (i < (size + 1))
    {
      str[i] = '\0';
      i++;
    }
  /*  i = j = 0;
  while (i < size+1)
    {
      str[i++] = dead[j++];
      if (j==8) j = 0;
    }
  printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
  dump(str, 255);
  printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");*/
  return (str);
}
