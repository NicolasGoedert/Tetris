/*
** tetris.h for tetris h in /home/clement/UnixSystemProgrammation/Tetris/PSU_2016_tetris/include
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Tue Feb 21 13:59:45 2017 clement girard
** Last update Fri Mar 10 12:00:11 2017 clement girard
*/

#ifndef TETRIS_H
#define TETRIS_H

#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <ncurses/curses.h>
#include <ncurses.h>
#include <pwd.h>
#include <grp.h>

/*tetris_score.c*/
int	tetris_score(char**, char*);

/*tetris_tab.c*/
char	*tetris_tab(char*, char*);
char	*print_tab_score(char*, int*);

/*tetris_letter.c*/
int	print_tetris_letter();
int	print_tetris_letter2();
int	print_tetris_letter3();

/*algo.c*/
int	algo(int, int, int, char*);
char	*my_tetriminos(char**, int);
char	*just_stars(char*, int*);

/*flag_map*/
char	*remplace_comma(char*);

/*divers.c*/
void	print_tab(char**);
void	puttab(char**);
int	my_len_malloc();
char	*my_stock_equal(char**, char*, int, int);

/*flag.c*/
int	my_flag_d(char**);
char	**good_tetrimino(char**);
char	**check_tab(char*, char**, int);
char	**error_or_not(char*, char**, int);

/*flag_h*/
int	my_flag_h(char**);
int	my_print_flag_d(int, char*);

/*fct_tetriminos.c*/
char	**fct_tetrimino(char**);
int	fct_read_tetriminos(char*);
char	**name_files(char**);
int	count_files();
char	**my_sort_tab(char**);

/*my_str_to_wordtab.c*/
int	nb_lines(char*);
int	nb_char(char*, int);
char	**my_str_to_wordtab(char*);

/*fct_ncurses*/
int	boucle(int, int, int, int, char*);
int	fct_ncurses(char**, char**);
char	**print_tetris(char**, char*);
int	print_map(char*);
int	stock_map(char*);
char	*stock_level(char*);
int	fct_timer(int, int, int);

/*check.c*/
int	check_file(char*, char*);
void	stock_nb(char**, char*);
int	puttab_tetriminos(char**, char*);
int	puttab_error(char*);
char	*cut_buf(char*);

#endif /* !TETRIS_H */
