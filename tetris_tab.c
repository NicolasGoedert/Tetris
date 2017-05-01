/*
** tetris_tab.c for tetris tab in /home/clement/UnixSystemProgrammation/Tetris/PSU_2016_tetris
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Fri Mar  3 19:12:38 2017 clement girard
** Last update Mon Mar  6 13:42:18 2017 clement girard
*/

#include "include/my.h"
#include "include/gnl.h"
#include "include/tetris.h"

char	*tetris_tab(char *tab, char *str)
{
  int	i;
  int	b;
  int	x;
  int	j;
  int	y;

  b = 0;
  i = 0;
  y = 0;
  x = stock_map(str);
  tab[b] = '+';
  b = b + 1;
  while (i != x + 1)
    {
      tab[b] = '-';
      i = i + 1;
      b = b + 1;
    }
  tab = print_tab_score(tab, &b);
  i = 1;
  while (i != x)
    {
      j = 0;
      tab[b] = '|';
      b = b + 1;
      while (j != x + 1)
	{
	  tab[b] = ' ';
	  j = j + 1;
	  b = b + 1;
	}
      if (y > 2)
	{
	  tab[b] = '|';
	  b = b + 1;
	  tab[b] = '\n';
	  b = b + 1;
	}
      else if (y < 2)
	{
	  printw("| |         |\n");
	  tab[b] = '|';
	  b = b + 1;
	  tab[b] = ' ';
	  b = b + 1;
	  tab[b] = '|';
	  b = b + 1;
	  tab[b] = ' ';
	  b = b + 1;
	  tab[b] = ' ';
	  b = b + 1;
	  tab[b] = ' ';
	  b = b + 1;
	  tab[b] = ' ';
	  b = b + 1;
	  tab[b] = ' ';
	  b = b + 1;
	  tab[b] = ' ';
	  b = b + 1;
	  tab[b] = ' ';
	  b = b + 1;
	  tab[b] = ' ';
	  b = b + 1;
	  tab[b] = ' ';
	  b = b + 1;
	  tab[b] = '|';
	  b = b + 1;
	  tab[b] = '\n';
	  b = b + 1;
	}
      else if (y == 2)
	{
	  printw("| \\---------/\n");
	  tab[b] = '|';
	  b = b + 1;
	  tab[b] = ' ';
	  b = b + 1;
	  tab[b] = '\\';
	  b = b + 1;
	  tab[b] = '-';
	  b = b + 1;
	  tab[b] = '-';
	  b = b + 1;
	  tab[b] = '-';
	  b = b + 1;
	  tab[b] = '-';
	  b = b + 1;
	  tab[b] = '-';
	  b = b + 1;
	  tab[b] = '-';
	  b = b + 1;
	  tab[b] = '-';
	  b = b + 1;
	  tab[b] = '-';
	  b = b + 1;
	  tab[b] = '-';
	  b = b + 1;
	  tab[b] = '/';
	  b = b + 1;
	  tab[b] = '\n';
	  b = b + 1;
	}
      i = i + 1;
      y = y + 1;
    }
  tab[b] = '+';
  b = b + 1;
  i = 0;
  while (i != x + 1)
    {
      tab[b] = '-';
      i = i + 1;
      b = b + 1;
    }
  tab[b] = '+';
  b = b + 1;
  tab[b] = '\n';
  b = b + 1;
  tab[b] = '\n';
  b = b + 1;
  tab[b] = '\n';
  b = b + 1;
  return (tab);
}

char	*print_tab_score(char *tab, int *b)
{
  tab[*b] = '+';
  *b = *b + 1;
  tab[*b] = ' ';
  *b = *b + 1;
  tab[*b] = '/';
  *b = *b + 1;
  tab[*b] = '-';
  *b = *b + 1;
  tab[*b] = 'n';
  *b = *b + 1;
  tab[*b] = 'e';
  *b = *b + 1;
  tab[*b] = 'x';
  *b = *b + 1;
  tab[*b] = 't';
  *b = *b + 1;
  tab[*b] = '-';
  *b = *b + 1;
  tab[*b] = '-';
  *b = *b + 1;
  tab[*b] = '-';
  *b = *b + 1;
  tab[*b] = '-';
  *b = *b + 1;
  tab[*b] = '\\';
  *b = *b + 1;
  tab[*b] = '\n';
  *b = *b + 1;
  return (tab);
}
