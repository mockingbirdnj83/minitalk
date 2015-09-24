/*
** my_put_lnbr.c for my_put_lnbr in /home/aubess_t/rendu/PSU_2013_my_printf
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Sun Nov 17 23:40:05 2013 au
** Last update Sat Mar  8 12:17:29 2014 au
*/


int	my_printlnbr(long nb)
{
  int	output;

  output = 0;
  if (nb == -2147483648)
    {
      output = output + my_printstr("-2147483648");
      return;
    }
  if (nb < 0)
    {
      nb = -nb;
      my_printchar('-');
      output = output + 1;
    }
  if (nb > 9)
    output = output + my_printnbr(nb / 10);
  output = output + my_printchar(nb % 10 + 48);
  return (output);
}
