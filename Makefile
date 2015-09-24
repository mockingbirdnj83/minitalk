##
## Makefile for Makefile in /home/aubess_t/work/oxo
## 
## Made by au
## Login   <aubess_t@epitech.net>
## 
## Started on  Fri Jan 24 19:41:22 2014 au
## Last update Sun Mar 23 22:50:32 2014 au
##

SRC_SERVER		= ./src/server/main.c \
			  ./src/server/check_params.c \
			  ./src/server/server.c \
	 		  ./src/server/init.c \
			  ./src/server/print_pid.c \
			  ./src/server/handler.c \
			  ./src/server/crypt.c \
			  ./src/server/timeout.c \
			  ./src/server/my_error.c

SRC_CLIENT		= ./src/client/main.c \
			  ./src/client/client.c \
			  ./src/client/bonus.c \
			  ./src/client/get_next_line.c \
			  ./src/client/my_error.c

SRC_DECRYPT		= ./src/decrypt/main.c

SRC_LIBMY		= ./lib/libmy/my_atoi.c \
			  ./lib/libmy/my_isdigit.c \
			  ./lib/libmy/my_isspace.c \
			  ./lib/libmy/my_putchar.c \
			  ./lib/libmy/my_putstr.c \
			  ./lib/libmy/my_putstr_fd.c \
			  ./lib/libmy/my_strcmp.c \
			  ./lib/libmy/my_strlen.c \
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

OBJ_DECRYPT		= $(SRC_DECRYPT:.c=.o)

OBJ_LIBMY		= $(SRC_LIBMY:.c=.o)

OBJ_PRINTF		= $(SRC_PRINTF:.c=.o)

NAME_SERVER		= ./bin/server/server

NAME_CLIENT		= ./bin/client/client

NAME_DECRYPT		= ./bin/decrypt/decrypt

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

minitalk: $(OBJ_LIBMY) $(OBJ_PRINTF) $(OBJ_SERVER) $(OBJ_CLIENT) $(OBJ_DECRYPT)
	@echo  "\n"
	@echo  "$(RED) >\tCOMPILATION FINISHED\t<\n$(WHITE)"
	@$(USLEEP)
	@echo ""
	@echo  "$(RED) >\tARCHIVES' CONTENT TABLES BUILDING & BINARIES' LINKAGE\t<\n"
	@$(LOADING)
	@echo  "$(CYAN)"
	@ar rc $(NAME_LIBMY) $(OBJ_LIBMY)
	@ar rc $(NAME_PRINTF) $(OBJ_PRINTF)
	@cc -o $(NAME_SERVER) $(OBJ_SERVER) $(LFLAGS)
	@cc -o $(NAME_CLIENT) $(OBJ_CLIENT) $(LFLAGS)
	@cc -o $(NAME_DECRYPT) $(OBJ_DECRYPT) $(LFLAGS)
	@echo  "\n"
	@echo  "$(GREEN)\t >\tLIBS & BINARIES' UPDATE : FINISHED\t<\n\n"
	@echo  "$(GREY) > Projet développé par :\n"
	@cat $(MISC)/login
	@echo  "$(GREY) Copyrigth ©\n"
	@echo  "$(WHITE)"

clean:
	$(USLEEP)
	@echo "$(RED)\n >\t.o & TEMPORARY FILES DELETED\n$(WHITE)"
	@rm -rf $(OBJ_SERVER) $(OBJ_CLIENT) $(OBJ_DECRYPT) $(OBJ_LIBMY) $(OBJ_PRINTF)

fclean: clean
	@echo ""
	@rm -rf $(NAME_LIBMY) $(NAME_PRINTF)
	@$(USLEEP)
	@echo "$(RED) >\tARCHIVES DELETED\n$(WHITE)"
	@echo ""
	@rm -rf $(NAME_SERVER)
	@rm -rf $(NAME_CLIENT)
	@rm -rf $(NAME_DECRYPT)
	@$(USLEEP)
	@echo "$(RED) >\tBINARIES DELETED\n$(WHITE)"
	@$(USLEEP)
	@echo "$(CYAN)"

re:	fclean all



## #####################################################################
##
## MISC' RULES
##

$(MISC):
	@echo "$(GREY)\n\n\n\t\t\t\t > MAKE TOOLS <\n$(WHITE)"
	@$(USLEEP)
	@(make -C $(MISC) re)



## #####################################################################
##
## BONUS RULES
##

coffee:
	@echo "$(CYAN_BRIGHT)"
	@cat $(MISC)/$@
	@echo "$(WHITE)"

boobs:
	@echo "$(CYAN_BRIGHT)"
	@cat $(MISC)/$@
	@echo "$(WHITE)"

## #####################################################################
##
## .PHONY
##

.PHONY: all cc link deco_cc deco_link clean fclean re libmy printf tools coffee
