/*
** my.h for my_printf in /home/bourge_v/trash/printf
** 
** Made by bourge_v
** Login   <bourge_v@epitech.net>
** 
** Started on  Thu Nov 14 20:43:15 2013 bourge_v
** Last update Sat Mar  8 12:43:21 2014 au
*/

#ifndef MY_H_
# define MY_H_

#include <stdarg.h>

typedef		int (*pFct)(va_list, int, char *);
typedef struct	s_tab
{
  char		flag;
  pFct		fct;
}		t_tab;

int	my_printchar(char c);
int	my_printstr(char *str);
int	my_printnbr(int nb);
int	my_printnbr_base(int nb, char *base);
int	my_print_unbr(unsigned int nb);
int	my_printunbr_base(unsigned int nb, char *base);
int	my_print_lnbr(long nb);
int	my_printlnbr_base(long nb, char *base);
char	*my_strcat(char *dest, char *src);
int	flag_d(va_list list, int output, char *ptr);
int	flag_c(va_list list, int output, char *ptr);
int	flag_s(va_list list, int output, char *ptr);
int	flag_S(va_list list, int output, char *ptr);
int	flag_x(va_list list, int output, char *ptr);
int	flag_X(va_list list, int output, char *ptr);
int	flag_u(va_list list, int output, char *ptr);
int	flag_o(va_list list, int output, char *ptr);
int	flag_p(va_list list, int output, char *ptr);
int	flag_b(va_list list, int output, char *ptr);
int	flag_m(va_list list, int output, char *ptr);
int	flag_n(va_list list, int output, char *ptr);
int	flag_percent(va_list list, int output, char *ptr);
int	flag_l(va_list list, int output, char *ptr);
int	flag_ld(va_list list, int output, char *ptr);
int	flag_lo(va_list list, int output, char *ptr);
int	flag_lx(va_list list, int output, char *ptr);
int	flag_lX(va_list list, int output, char *ptr);

#endif /* !MY_H_ */
