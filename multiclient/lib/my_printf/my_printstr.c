/*
** my_putstr.c for my_putstr in /home/aubess_t/rendu/PSU_2013_my_printf
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Tue Nov 12 08:31:38 2013 au
** Last update Sat Mar  8 12:38:47 2014 au
*/

int	my_printstr(char *str)
{
  int	output;

  output = 0;
  while (*str)
    {
      my_printchar(*str);
      output = output + 1;
      str = str + 1;
    }
  return (output);
}
