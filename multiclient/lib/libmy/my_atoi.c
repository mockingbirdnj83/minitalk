/*
** my_atoi.c for my_atoi in /home/aubess_t/work/semestre2/minishellmaster/lib/libmy
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Sun Mar  9 23:52:57 2014 au
** Last update Sun Mar  9 23:52:58 2014 au
*/

static int	my_atoi_isvalid(const char *s, int i)
{
  if (my_isdigit(s[i]) == 1
      || (i == 0 && (s[i] == '-' || s[i] == '+')))
    return (1);
  return (0);
}

int		my_atoi(const char *s)
{
  int		i;
  int		sign;
  int		result;

  if (!s)
    return (0);
  i = 0;
  sign = 1;
  result = 0;
  while (my_isspace(*s) == 1)
    s++;
  while (s[i] != '\0' && my_atoi_isvalid(s, i) == 1)
    {
      if (i == 0 && s[i] == '-')
	sign = -1;
      if (my_isdigit(s[i]))
	result = s[i] - '0' + result * 10;
      i += 1;
    }
  return (result * sign);
}
