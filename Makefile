##
## Makefile for majefile in /home/clement/UnixSystemProgrammation/Tetris/PSU_2016_tetris
## 
## Made by clement girard
## Login   <clement@epitech.net>
## 
## Started on  Mon Feb 20 17:13:41 2017 clement girard
## Last update Mon Mar  6 13:37:49 2017 clement girard
##

NAME	=	tetris

SRCS	=	main.c			\
		my_str_to_wordtab.c	\
		flag.c			\
		fct_tetriminos.c	\
		divers.c		\
		flag_l.c		\
		flag_kl.c		\
		flag_kr.c		\
		flag_kt.c		\
		flag_kd.c		\
		flag_kq.c		\
		flag_kp.c		\
		flag_map.c		\
		flag_w.c		\
		flag_h.c		\
		fct_ncurses.c		\
		check.c			\
		algo.c			\
		tetris_letter.c		\
		tetris_tab.c		\
		tetris_score.c

OBJS	=	$(SRCS:.c=.o)

all	:	$(NAME)

$(NAME)	:
		gcc $(SRCS) -L lib/ -lmy -L lib/ -lgnl -o $(NAME) -lncurses

clean	:
		rm -rf $(OBJS)

fclean	:	clean
		rm -rf $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
