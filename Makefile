##
## Makefile for sudoki-bi in /home/gerard_v/rendu/sudoki-bi
## 
## Made by Valentin GERARD
## Login   <gerard_v@epitech.net>
## 
## Started on  Fri Feb 26 20:26:16 2016 Valentin GERARD
## Last update Mon Feb 29 14:27:43 2016 Lucas DEBOUTÉ
##

CC	= gcc

RM	= rm -rf

CFLAGS	= -Wall -Wextra -ansi -pedantic -I./include

NAME	= ./bin/sudoki-bi

SRCS	= srcs/sudoki-bi.c	\
	  srcs/s_init.c		\
	  srcs/s_stock.c	\
	  srcs/s_check.c	\
	  srcs/get_next_line.c	\
	  srcs/print_board.c	\
	  srcs/my_func.c	\
	  srcs/solver/add_element.c \
	  srcs/solver/bool.c	\
	  srcs/solver/free_list.c

OBJS	= $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
