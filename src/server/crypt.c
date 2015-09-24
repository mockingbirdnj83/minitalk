/*
** crypt.c for crypt in /home/aubess_t/work/semestre2/minitalk
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Sat Mar 22 02:07:25 2014 au
** Last update Sun Mar 23 22:36:45 2014 au
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <stdio.h>
#include "main.h"
#include "extern.h"

void		crypt(char c)
{
  static int	i = 0;
  char		crypted_char;	
  
  if ((FD = open(ENCRYPTED_FILE, O_CREAT | O_WRONLY | O_APPEND,
		 S_IRUSR | S_IWUSR)) == -1)
    my_error(5);
  crypted_char = c ^ KEY[i];
  write(FD, &crypted_char, 1);
  close(FD);
  i++;
  if (i > SIZEOF_KEY)
    i = 0;
}
