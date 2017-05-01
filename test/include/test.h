/*
** test.h for test in /home/clement/UnixSystemProgrammation/Tetris/test/include
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Tue Mar  7 11:35:07 2017 clement girard
** Last update Wed Mar  8 17:54:51 2017 clement girard
*/

#ifndef TEST_H
#define TEST_H

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

char	**check_line(char**);
int	fct_touches(char**);
char	**fct_down(char**, int*, int, int);
char	**fct_up(char**, int*, int, int);
char	**fct_right(char**, int, int*, int);
char	**fct_left(char**, int, int*, int);
char	*tetris_tab(char*, int);
char	*print_tab_score(char*, int*);
char	**my_str_to_wordtab(char*);

#endif /* !TEST_H */
