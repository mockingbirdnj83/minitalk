##
## Makefile for Makefile in /home/aubess_t/work/oxo/lib/libmy
## 
## Made by au
## Login   <aubess_t@epitech.net>
## 
## Started on  Sat Jan 25 02:47:07 2014 au
## Last update Tue Mar 11 13:48:19 2014 au
##

SRC	= $(wildcard *.c)

OBJ	= $(SRC:.c=.o)

NAME	= ../lib_my_printf.a

GREEN		= \033[1;32m
CYAN		= \033[0;36m
CYAN_BRIGHT	= \033[1;36m
WHITE		= \033[0m
RED		= \033[1;31m
GREY		= \033[1;37m

all: $(NAME)

$(NAME): cc link

cc: deco_cc $(OBJ)
	@echo -e "\n"
	@echo -e "$(WHITE)"

link: deco_link
	@ar rc $(NAME) $(OBJ)
	@echo -e "$(RED) >\tCONTENT TABLE BUILDING\n$(WHITE)"
	@echo -e "\n\n"
	@ranlib ../libmy.a
	@echo -e "$(GREEN) >\tCOMPILATION DE LA LIB TERMINEE\n\n"
	@echo -e "$(WHITE)"

deco_cc:
	@echo -e "$(RED) >\tCOMPILATION EN COURS\n$(WHITE)"
	@echo -e "$(CYAN)"

deco_link:  
	@echo -e "$(RED) >\tARCHIVAGE EN COURS\n" 

clean:
	@echo ""
	@echo -e "$(RED) >\tSUPPRESSION DES .o\n$(WHITE)"
	@rm -rf $(OBJ)

fclean:	clean
	@echo -e "$(RED) >\tSUPPRESSION DU BIN\n$(WHITE)"
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
