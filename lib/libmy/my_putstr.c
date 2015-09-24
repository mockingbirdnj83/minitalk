/*
** my_putstr.c for putstr in /home/aubess_t/work/semestre2/minishellmaster/lib/libmy
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Sun Mar  9 23:55:25 2014 au
** Last update Thu Mar 20 19:23:14 2014 au
*/

void    my_putstr(const char *s)
{
  if (!s)
    return;
  write(0, s, my_strlen(s));
}
