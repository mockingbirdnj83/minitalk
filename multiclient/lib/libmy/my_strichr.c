/*
** my_strichr.c for strichr in /home/aubess_t/work/semestre2/minishellmaster/lib/libmy
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Sun Mar  9 23:59:20 2014 au
** Last update Sun Mar  9 23:59:21 2014 au
*/

int	my_strichr(const char *s, int c)
{
  int	i;

  i = 0;
  if (s)
    {
      while (s[i] != '\0')
	{
	  if (s[i] == (char)c)
	    return (i);
	  i++;
	}
    }
  return (-1);
}
