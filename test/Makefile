##
## Makefile for makefile in /home/clement/UnixSystemProgrammation/Tetris/test
## 
## Made by clement girard
## Login   <clement@epitech.net>
## 
## Started on  Tue Mar  7 11:27:24 2017 clement girard
## Last update Tue Mar  7 11:51:29 2017 clement girard
##

NAME	=	tetris

SRCS	=	main.c			\
		my_str_to_wordtab.c

OBJS	=	$(SRCS:.c=.o)

all	:	$(NAME) clean

$(NAME)	:	$(OBJS)
		gcc $(SRCS) -L lib/ -lmy -lncurses -o $(NAME)

clean	:
		rm -rf $(OBJS)

fclean	:	clean
		rm -rf $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
