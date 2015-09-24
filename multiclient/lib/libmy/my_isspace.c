/*
** my_isspace.c for isspace in /home/aubess_t/work/semestre2/minishellmaster/lib/libmy
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Sun Mar  9 23:54:32 2014 au
** Last update Sun Mar  9 23:54:32 2014 au
*/

int	my_isspace(int c)
{
  if (c == '\t' || c == '\v' || c == '\n' || c == '\r' || c == '\f'
      || c == ' ')
    return (1);
  return (0);
}
