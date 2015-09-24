/*
** fct1.c for fct1 in /home/aubess_t/rendu/PSU_2013_my_printf
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Sun Nov 17 23:28:26 2013 au
** Last update Sat Mar  8 12:40:43 2014 au
*/

#include <stdarg.h>
#include "my.h"

typedef unsigned int uint;

int	flag_d(va_list list, int output, char *ptr)
{
  int	nb;

  nb = va_arg(list, int);
  if (*ptr  == '+')
    {
      if (nb >= 0)
	output = output + my_printchar('+');
    }
  else if (*ptr == ' ')
    output = output + my_printchar(' ');
  output = output + my_printnbr(nb);
  return (output);
}

int	flag_s(va_list list, int output, char *ptr)
{
  char	*str;

  str = va_arg(list, char *);
  output = output + my_printstr(str);
  return (output);
}

int	flag_c(va_list list, int output, char *ptr)
{
  char	c;

  c = (char)va_arg(list, int);
  output = output + my_printchar(c);
  return (output);
}

int	flag_o(va_list list, int output, char *ptr)
{
  int	nb;

  nb = va_arg(list, uint);
  output = output + my_printunbr_base(nb, "01234567");
  return (output);
}

int	flag_b(va_list list, int output, char *ptr)
{
  int	nb;

  nb = va_arg(list, int);
  output = output + my_printnbr_base(nb, "01");
  return (output);
}
