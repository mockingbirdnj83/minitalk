/*
** my_str_isdigit.c for my_str_isdigit in /home/aubess_t/work/semestre2/minitalk/lib/libmy
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Wed Mar 12 23:53:47 2014 au
** Last update Fri Mar 21 20:13:32 2014 au
*/

int	my_str_isdigit(const char *str)
{
  str--;
  while (*(++str))
    if (*str < 48 || *str > 57)
      return (1);
  return (0);
}
