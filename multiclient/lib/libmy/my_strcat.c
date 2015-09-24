/*
** my_strcat.c for my_strcat in /home/aubess_t/work/semestre2/minishellmaster/lib/libmy
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Sun Mar  9 23:55:53 2014 au
** Last update Sun Mar  9 23:55:54 2014 au
*/

char		*my_strcat(char *dest, const char *src)
{
  unsigned int	i;
  unsigned int	len;

  i = 0;
  len = my_strlen(dest);
  while (src[i] != '\0')
    {
      dest[len + i] = src[i];
      i += 1;
    }
  dest[len + i] = '\0';
  return (dest);
}
