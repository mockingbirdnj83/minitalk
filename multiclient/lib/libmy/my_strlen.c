/*
** my_strlen.c for strlen in /home/aubess_t/work/semestre2/minishellmaster/lib/libmy
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Sun Mar  9 23:57:04 2014 au
** Last update Tue Mar 18 14:49:24 2014 au
*/

int	my_strlen(const char *s)
{
  int	i;
  
  i = 0;
  if (s)
    while (s[i])
      i++;
  return (i);
}
