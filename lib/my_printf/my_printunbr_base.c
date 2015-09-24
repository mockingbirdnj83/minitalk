/*
** my_putunbr_base.c for my_putunbr_base.c in /home/aubess_t/rendu/PSU_2013_my_printf
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Sun Nov 17 23:40:58 2013 au
** Last update Sat Mar  8 12:39:27 2014 au
*/


#include "my.h"

typedef unsigned int uint;

int	my_printunbr_base(uint nb, char *base)
{
  uint	result;
  uint	diviseur;
  int   size_base;
  int	output;

  output = 0;
  size_base = my_strlen(base);
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
