/*
** my_putchar.c for putchar in /home/aubess_t/work/semestre2/minishellmaster/lib/libmy
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Sun Mar  9 23:54:53 2014 au
** Last update Sun Mar  9 23:54:54 2014 au
*/

void	my_putchar(char c)
{
  if (c)
    my_putchar_fd(c, 1);
}
