/*
** tetris_letter.c for tetris letter in /home/clement/UnixSystemProgrammation/Tetris/PSU_2016_tetris
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Fri Mar  3 18:45:22 2017 clement girard
** Last update Mon Mar  6 13:28:49 2017 clement girard
*/

#include "include/my.h"
#include "include/gnl.h"
#include "include/tetris.h"

int	print_tetris_letter()
{
  init_pair(1, COLOR_RED, 0);
  init_pair(2, COLOR_CYAN, 0);
  init_pair(3, COLOR_YELLOW, 0);
  init_pair(4, COLOR_GREEN, 0);
  init_pair(5, COLOR_CYAN, 0);
  init_pair(6, COLOR_MAGENTA, 0);
  init_pair(7, COLOR_WHITE, 0);
  attron(COLOR_PAIR(1));
  printw("\n* * * ");
  attron(COLOR_PAIR(2));
  printw("* * * ");
  attron(COLOR_PAIR(3));
  printw("* * * ");
  attron(COLOR_PAIR(4));
  printw("* * * ");
  attron(COLOR_PAIR(5));
  printw("* ");
  attron(COLOR_PAIR(6));
  printw("* * * \n");
  attron(COLOR_PAIR(1));
  printw("  *  ");
  attron(COLOR_PAIR(2));
  printw(" *   ");
  print_tetris_letter_2();
  return (0);
}

int	print_tetris_letter_2()
{
  attron(COLOR_PAIR(3));
  printw("    *  ");
  attron(COLOR_PAIR(4));
  printw(" *   * ");
  attron(COLOR_PAIR(6));
  printw("  *     \n");
  attron(COLOR_PAIR(1));
  printw("  *  ");
  attron(COLOR_PAIR(2));
  printw(" * *   ");
  attron(COLOR_PAIR(3));
  printw("  *  ");
  attron(COLOR_PAIR(4));
  printw(" * *  ");
  attron(COLOR_PAIR(5));
  printw(" * ");
  attron(COLOR_PAIR(6));
  printw("* * * \n");
  attron(COLOR_PAIR(1));
  printw("  *  ");
  attron(COLOR_PAIR(2));
  printw(" *    ");
  attron(COLOR_PAIR(3));
  printw("   *  ");
  print_tetris_letter_3();
  return (0);
}

int	print_tetris_letter_3()
{
  attron(COLOR_PAIR(4));
  printw(" *   * ");
  attron(COLOR_PAIR(5));
  printw("* ");
  attron(COLOR_PAIR(6));
  printw("    * \n");
  attron(COLOR_PAIR(1));
  printw("  *  ");
  attron(COLOR_PAIR(2));
  printw(" * * * ");
  attron(COLOR_PAIR(3));
  printw("  *  ");
  attron(COLOR_PAIR(4));
  printw(" *   * ");
  attron(COLOR_PAIR(5));
  printw("* ");
  attron(COLOR_PAIR(6));
  printw("* * * \n\n\n");
  attron(COLOR_PAIR(7));
  return (0);
}
