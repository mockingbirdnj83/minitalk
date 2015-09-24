/*
** my_put_nbr.c for my_putnbr in /home/aubess_t/work/oxo/utils
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Sat Jan 25 10:49:12 2014 au
** Last update Sat Mar  8 12:34:57 2014 au
*/

int	my_printnbr(int nb)
{
  int	output;

  output = 0;
  if (nb == -2147483648)
    {
      output = output + my_printstr("-2147483648");
      return (output);;
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
