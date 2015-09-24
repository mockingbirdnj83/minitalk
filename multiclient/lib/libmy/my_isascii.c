/*
** my_isascii.c for isascii in /home/aubess_t/work/semestre2/minishellmaster/lib/libmy
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Sun Mar  9 23:53:49 2014 au
** Last update Sun Mar  9 23:53:50 2014 au
*/

int	my_isascii(int c)
{
  if (c >= 0 && c <= 127)
    return (1);
  return (0);
}
