/*
** main.c for main in /home/aubess_t/work/semestre2/minitalk/src/server
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Wed Mar 12 17:38:28 2014 au
** Last update Sun Mar 23 22:26:02 2014 au
*/

#include "main.h"
#include <sys/types.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
  server(argc, argv);
  return (0);
}
