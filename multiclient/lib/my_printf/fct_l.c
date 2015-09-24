/*
** fct_l.c for fct_l in /home/aubess_t/rendu/PSU_2013_my_printf
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Sun Nov 17 22:45:01 2013 au
** Last update Sat Mar  8 14:35:27 2014 au
*/

#include <stdarg.h>
#include "my.h"

int	flag_ld(va_list list, int output, char *ptr)
{
  long	nb;

  nb = va_arg(list, long);
  output = output + my_printlnbr(nb);
  return (output);
}

int	flag_lo(va_list list, int output, char *ptr)
{
  long	nb;

  nb = va_arg(list, long);
  output = output + my_printlnbr_base(nb, "01234567");
  return (output);
}

int	flag_lx(va_list list, int output, char *ptr)
{
  long	nb;

  nb = va_arg(list, long);
  if (nb < 0)
    output = output + my_printstr("ffffffff");
  else
    output = output + my_printlnbr_base(nb, "0123456789abcdef");
  return (output);
}

int	flag_lX(va_list list, int output, char *ptr)
{
  long	nb;

  nb = va_arg(list, long);
  if (nb < 0)
    output = output + my_printstr("FFFFFFFF");
  else
    output = output + my_printlnbr_base(nb, "0123456789ABCDEF");
  return (output);
}
