/*
** my_putnbr_base.c for my_printf in /home/bourge_v/trash/printf
** 
** Made by bourge_v
** Login   <bourge_v@epitech.net>
** 
** Started on  Thu Nov 14 23:11:45 2013 bourge_v
** Last update Sat Mar  8 12:15:59 2014 au
*/

#include "my.h"

int	my_printlnbr_base(long nb, char *base)
{
  long	result;
  long   diviseur;
  int   size_base;
  int	output;

  output = 0;
  size_base = my_strlen(base);
  if (nb < 0)
    {
      output = output + my_printchar('-');
      nb = -nb;
    }
  diviseur = 1;
  while ((nb / diviseur) >= size_base)
    diviseur = diviseur * size_base;
  while (diviseur > 0)
    {
      result = (nb /diviseur) % size_base;
      output = output + my_printchar(base[result]);
      diviseur = diviseur / size_base;
    }
  return (output);
}
