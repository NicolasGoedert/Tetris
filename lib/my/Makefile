##
## Makefile for makefile in /home/clement/Piscine/CPool_Day10/lib/my
## 
## Made by clement girard
## Login   <clement@epitech.net>
## 
## Started on  Fri Oct 14 09:12:27 2016 clement girard
## Last update Mon Oct 17 13:47:32 2016 clement girard
##

NAME	=	libmy.a

SRCS	=	my_putchar.c \
		my_isneg.c \
		my_put_nbr.c \
		my_swap.c \
		my_putstr.c \
		my_strlen.c \
		my_getnbr.c \
		my_sort_int_tab.c \
		my_power_rec.c \
		my_square_root.c \
		my_is_prime.c \
		my_find_prime_sup.c \
		my_strcpy.c \
		my_strncpy.c \
		my_revstr.c \
		my_strstr.c \
		my_strcmp.c \
		my_strncmp.c \
		my_strupcase.c \
		my_strlowcase.c \
		my_strcapitalize.c \
		my_str_isalpha.c \
		my_str_isnum.c \
		my_str_islower.c \
		my_str_isupper.c \
		my_str_isprintable.c \
		my_showstr.c \
		my_showmem.c \
		my_strcat.c \
		my_strncat.c

OBJS	= $(SRCS:.c=.o)

all: compile clean lib myh

compile:
	gcc -c $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

lib:
	cp $(NAME) ../

myh:
	cp my.h ../../include/

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all compile lib clean fclean re
