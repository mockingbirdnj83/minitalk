/*
** my_strrichr.c for strrichr in /home/aubess_t/work/semestre2/minishellmaster/lib/libmy
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Sun Mar  9 23:58:25 2014 au
** Last update Sun Mar  9 23:58:25 2014 au
*/

int	my_strrichr(const char *s, int c)
{
  int	i;

  i = my_strlen(s);
  while (i-- >= 0)
    {
      if (s[i] == (char)c)
	return (i);
    }
  return (-1);
}
