/*
** fct2.c for fct2 in /home/aubess_t/rendu/PSU_2013_my_printf
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Sun Nov 17 23:01:09 2013 au
** Last update Sat Mar  8 12:41:27 2014 au
*/

#include <stdarg.h>

typedef unsigned int uint;

int	flag_x(va_list list, int output, char *ptr)
{
  uint	nb;
  
  nb = va_arg(list, uint);
  if (nb < 0)
    output = output + my_printstr("ffffffff");
  else
    output = output + my_printunbr_base(nb, "0123456789abcdef");
  return (output);
}

int	flag_X(va_list list, int output, char *ptr)
{
  uint	nb;
  
  nb = va_arg(list, uint);
  if (nb < 0)
    output = output + my_printstr("FFFFFFFF");
  else
    output = output + my_printunbr_base(nb, "0123456789ABCDEF");
  return (output);
}

int	flag_S(va_list list, int output, char *ptr)
{
  char	*str;
  
  str = va_arg(list, char *);
  while (*str)
    {
      if (*str < 32 || *str >= 127)
	{
	  if (*str < 7)
	    output = output + my_printstr("\\00");
	  else if (*str > 7 && *str < 32)
	    output = output + my_printstr("\\0");
	  else if (*str >= 127)
	    output = output + my_printstr("\\");
	  output = output + my_printnbr_base(*str, "01234567");
	}
      else
	output = output + my_printchar(*str);
      str = str + 1;
    }
  return (output);
}

int	flag_u(va_list list, int output, char *ptr)
{
  uint	nb;

  nb = va_arg(list, uint);
  output = output + my_printnbr(nb);
  return (output);
}

int	flag_p(va_list list, int output)
{
  void	*ptr;

  ptr = va_arg(list, void *);
  output = output + my_printstr("0x7fff");
  output = output + my_printnbr_base(ptr, "0123456789abdcef");
  return (output);
}
