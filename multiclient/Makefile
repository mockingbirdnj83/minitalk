##
## Makefile for Makefile in /home/aubess_t/work/oxo
## 
## Made by au
## Login   <aubess_t@epitech.net>
## 
## Started on  Fri Jan 24 19:41:22 2014 au
## Last update Sun Mar 23 23:31:42 2014 au
##

SRC_SERVER		= ./src/server/main.c \
			  ./src/my_error.c \

SRC_CLIENT		= ./src/client/main.c \
			  ./src/client/get_next_line.c \
			  ./src/my_error.c \

SRC_LIBMY		= ./lib/libmy/my_atoi.c \
			  ./lib/libmy/my_isascii.c \
			  ./lib/libmy/my_isdigit.c \
			  ./lib/libmy/my_isspace.c \
			  ./lib/libmy/my_memalloc.c \
			  ./lib/libmy/my_putchar.c \
			  ./lib/libmy/my_putchar_fd.c \
			  ./lib/libmy/my_putstr.c \
			  ./lib/libmy/my_putstr_fd.c \
			  ./lib/libmy/my_strcat.c \
			  ./lib/libmy/my_strchr.c \
			  ./lib/libmy/my_strcmp.c \
			  ./lib/libmy/my_strcpy.c \
			  ./lib/libmy/my_strdup.c \
			  ./lib/libmy/my_strfjoin.c \
			  ./lib/libmy/my_strichr.c \
			  ./lib/libmy/my_strjoin.c \
			  ./lib/libmy/my_strlen.c \
			  ./lib/libmy/my_strncmp.c \
			  ./lib/libmy/my_strnew.c \
			  ./lib/libmy/my_strrchr.c \
			  ./lib/libmy/my_strrichr.c \
			  ./lib/libmy/my_strsub.c \
			  ./lib/libmy/my_strtrim.c \
			  ./lib/libmy/my_str_isdigit.c

SRC_PRINTF		= ./lib/my_printf/fct1.c \
			  ./lib/my_printf/fct2.c \
			  ./lib/my_printf/fct3.c \
			  ./lib/my_printf/fct_l.c \
			  ./lib/my_printf/fill_tab.c \
			  ./lib/my_printf/my_printchar.c \
			  ./lib/my_printf/my_printf.c \
			  ./lib/my_printf/my_printlnbr_base.c \
			  ./lib/my_printf/my_printlnbr.c \
			  ./lib/my_printf/my_printnbr_base.c \
			  ./lib/my_printf/my_printnbr.c \
			  ./lib/my_printf/my_printstr.c \
			  ./lib/my_printf/my_printunbr_base.c \
			  ./lib/my_printf/my_strcat.c \
			  ./lib/my_printf/my_strlen.c \
			  ./lib/my_printf/run.c

OBJ_SERVER		= $(SRC_SERVER:.c=.o)

OBJ_CLIENT		= $(SRC_CLIENT:.c=.o)

OBJ_LIBMY		= $(SRC_LIBMY:.c=.o)

OBJ_PRINTF		= $(SRC_PRINTF:.c=.o)

NAME_SERVER		= ./bin/server/server

NAME_CLIENT		= ./bin/client/client

NAME_LIBMY		= ./lib/libmy.a

NAME_PRINTF		= ./lib/lib_my_printf.a

LFLAGS			= -lmy -l_my_printf -L ./lib/

MISC			= ./misc

LOADING			= @$(MISC)/loading

USLEEP			= @$(MISC)/my_usleep

GREEN			= \033[1;32m
CYAN			= \033[0;36m
CYAN_BRIGHT		= \033[1;36m
WHITE			= \033[0m
RED			= \033[1;31m
GREY			= \033[1;37m
HIDDEN			= \033[8m



## #####################################################################
##
## BIN'S RULES
##

all: minitalk

minitalk: $(OBJ_LIBMY) $(OBJ_PRINTF) $(OBJ_SERVER) $(OBJ_CLIENT)
	@echo -e "\n"
	@echo -e "$(RED) >\tCOMPILATION FINISHED\t<\n$(WHITE)"
	$(USLEEP)
	@echo ""
	@echo -e "$(RED) >\tARCHIVES' CONTENT TABLES BUILDING & BINARIES' LINKAGE\t<\n"
	$(LOADING)
	@echo -e "$(CYAN)"
	@ar rc $(NAME_LIBMY) $(OBJ_LIBMY)
	@ar rc $(NAME_PRINTF) $(OBJ_PRINTF)
	@cc -o $(NAME_SERVER) $(OBJ_SERVER) $(LFLAGS) -g
	@cc -o $(NAME_CLIENT) $(OBJ_CLIENT) $(LFLAGS)
	@echo -e "\n"
	@echo -e "$(GREEN)\t >\tLIBS & BINARIES' UPDATE : FINISHED\t<\n\n"
	@echo -e "$(GREY) > Projet développé par :\n"
	@cat $(MISC)/login
	@echo -e "$(GREY) Copyrigth ©\n"
	@echo -e "$(WHITE)"

clean:
	$(USLEEP)
	@echo -e "$(RED)\n >\t.o & TEMPORARY FILES DELETED\n$(WHITE)"
	@rm -rf $(OBJ_SERVER) $(OBJ_CLIENT) $(OBJ_LIBMY) $(OBJ_PRINTF)

fclean: clean
	@echo ""
	@rm -rf $(NAME_LIBMY) $(NAME_PRINTF)
	$(USLEEP)
	@echo -e "$(RED) >\tARCHIVES DELETED\n$(WHITE)"
	@echo ""
	@rm -rf $(NAME_SERVER)
	@rm -rf $(NAME_CLIENT)
	$(USLEEP)
	@echo -e "$(RED) >\tBINARIES DELETED\n$(WHITE)"
	$(USLEEP)
	@echo -e "$(CYAN)"

re:	fclean all



## #####################################################################
##
## MISC' RULES
##

$(MISC):
	@echo -e "$(GREY)\n\n\n\t\t\t\t > MAKE TOOLS <\n$(WHITE)"
	$(USLEEP)
	@(make -C $(MISC) re)



## #####################################################################
##
## BONUS RULES
##

coffee:
	@echo -e "$(CYAN_BRIGHT)"
	@cat $(MISC)/$@
	@echo -e "$(WHITE)"

boobs:
	@echo -e "$(CYAN_BRIGHT)"
	@cat $(MISC)/$@
	@echo -e "$(WHITE)"

## #####################################################################
##
## .PHONY
##

.PHONY: all cc link deco_cc deco_link clean fclean re libmy printf tools coffee
