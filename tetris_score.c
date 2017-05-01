/*
** tetris_score.c for tetris score in /home/clement/UnixSystemProgrammation/Tetris/PSU_2016_tetris
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Mon Mar  6 13:34:30 2017 clement girard
** Last update Mon Mar  6 13:40:39 2017 clement girard
*/

#include "include/my.h"
#include "include/gnl.h"
#include "include/tetris.h"

int	tetris_score(char **tab, char *str)
{
  int	z;
  char	*buf;

  if ((buf = malloc(sizeof(char) * my_strlen(str))) == NULL)
    return (-1);
  printw("/-------------------------\\\n");
  printw("|                         |\n");
  printw("| High Score            0 |\n");
  printw("| Score                 0 |\n");
  printw("|                         |\n");
  printw("| Lines                 0 |\n");
  printw("| Level                ");
  buf = stock_level(tab[7]);
  z = my_getnbr(buf);
  if (z < 10)
    printw("0%d |\n", z);
  else
    printw("%d |\n", z);
  printw("|                         |\n");
  printw("| Timer             00:00 |\n");
  printw("\\-------------------------/\n");
  refresh();
  return (0);
}
