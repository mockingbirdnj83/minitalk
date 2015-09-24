/*
** main.h for main in /home/aubess_t/work/semestre2/minitalk/src
** 
** Made by au
** Login   <aubess_t@epitech.net>
** 
** Started on  Thu Mar 20 17:00:40 2014 au
** Last update Sun Mar 23 23:16:59 2014 au
*/

#ifndef MAIN_H_
# define MAIN_H_

/*
** **************************************
** *					*
** *	INCLUDES			*
** *					*
*/

# include "../minitalk.h"

/*
** *					*
** **************************************
*/

/*
** **************************************
** *					*
** *	DEFINES				*
** *					*
*/

# define ASTEK		-1

# define NONE		0
# define IN_PROCESS	1

# define CLIENT		g_current.client
# define TIMEOUT	g_current.timeout
# define OFF		g_current.off
# define C		g_current.c

# define TIMED_OUT	10000000

# define GRAPHICS	g_current.graphics
# define ENCRYPT	g_current.encrypt

# define FD		g_current.fd
# define KEY		g_current.key
# define SEGFAULT	"salut"
# define SIZEOF_KEY	5
# define ENCRYPTED_FILE	"./encrypted_file"

/*
** *					*
** **************************************
*/

/*
** **************************************
** *					*
** *	TYPEDEFS			*
** *					*
*/

typedef struct	s_current
{
  int		client;
  int		timeout;
  int		off;
  char		c;
  int		graphics;
  int		encrypt;
  char		*key;
  int		fd;
}		t_current;

/*
** *					*
** **************************************
*/

/*
** **************************************
** *					*
** *	PROTOTYPES			*
** *					*
*/

void	handler(int signum);

/*
** *					*
** **************************************
*/

#endif /* MAIN_H_ */
