/*
** my_isdigit.c for isdigit in /home/aubess_t/work/semestre2/minishellmaster/lib/libmy
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Sun Mar  9 23:54:08 2014 au
** Last update Sun Mar  9 23:54:09 2014 au
*/

int	my_isdigit(int c)
{
  if (c >= '0' && c <= '9')
    return (1);
  return (0);
}
