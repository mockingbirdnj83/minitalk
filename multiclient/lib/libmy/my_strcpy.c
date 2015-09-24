/*
** my_strcpy.c for strcpy in /home/aubess_t/work/semestre2/minishellmaster/lib/libmy
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Sun Mar  9 23:56:23 2014 au
** Last update Sun Mar  9 23:56:23 2014 au
*/

char	*my_strcpy(char *s1, const char *s2)
{
  int	i;

  i = 0;
  while (s2[i] != '\0')
    {
      s1[i] = s2[i];
      i += 1;
    }
  s1[i] = '\0';
  return (s1);
}
