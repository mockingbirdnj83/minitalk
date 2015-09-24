/*
** my_strcmp.c for strcmp in /home/aubess_t/work/semestre2/minishellmaster/lib/libmy
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Sun Mar  9 23:56:13 2014 au
** Last update Sun Mar  9 23:56:13 2014 au
*/

int	my_strcmp(const char *s1, const char *s2)
{
  while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
    {
      s1++;
      s2++;
    }
  return (*s1 - *s2);
}
