/*
** my_strncmp.c for strncmp in /home/aubess_t/work/semestre2/minishellmaster/lib/libmy
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Sun Mar  9 23:57:41 2014 au
** Last update Sun Mar  9 23:57:42 2014 au
*/

int	my_strncmp(const char *s1, const char *s2, int n)
{
  int  i;

  i = 0;
  while (i < (n - 1) && s1[i] == s2[i] && s1[i] != '\0')
    i++;
  return (s1[i] - s2[i]);
}
