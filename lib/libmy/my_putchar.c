/*
** my_putchar.c for putchar in /home/aubess_t/work/semestre2/minishellmaster/lib/libmy
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Sun Mar  9 23:54:53 2014 au
** Last update Thu Mar 20 19:22:11 2014 au
*/

void	my_putchar(char c)
{
  if (c)
    write(0, &c, 1);
}
