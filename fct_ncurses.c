/*
** fct_ncurses.c for fct ncurses in /home/clement/UnixSystemProgrammation/Tetris/PSU_2016_tetris
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Fri Feb 24 18:17:46 2017 clement girard
** Last update Wed Mar  8 15:27:22 2017 clement girard
*/

#include "include/my.h"
#include "include/gnl.h"
#include "include/tetris.h"

int	fct_ncurses(char **stock_tab, char **tetri_tab)
{
  char	*str;
  char	**tab;
  char	**tab2;
  char	*buf;
  char	*stock;
  int	x;
  int	y;
  int	i;
  int	j;
  int	z;
  int	s;

  if ((str = malloc(sizeof(char) * my_strlen(stock_tab[8]) + 1)) == NULL)
    return (-1);
  if ((buf = malloc(sizeof(char) * 1000)) == NULL)
    return (-1);
  if ((stock = malloc(sizeof(char) * 1000)) == NULL)
    return (-1);
  str = stock_tab[8];
  initscr();
  curs_set(0);
  start_color();
  tab2 = print_tetris(stock_tab, str);
  print_tab(tab2);
  tetris_score(stock_tab, str);
  j = 0;
  while (1)
    {
      x = 9;
      y = 1;
      z = 0;
      buf = my_tetriminos(tetri_tab, j);
      stock = just_stars(buf, &z);
      tab = my_str_to_wordtab(stock);
      i = stock_map(str) + x - z - 2;
      s = z;
      mvprintw(x, y, "%s", tab[0]);
      s = s - 1;
      if (s > 0)
	mvprintw(x + 1, y, "%s", tab[1]);
      s = s - 1;
      if (s > 0)
	mvprintw(x + 2, y, "%s", tab[2]);
      s = s - 1;
      if (s > 0)
	mvprintw(x + 3, y, "%s", tab[3]);
      s = s - 1;
      if (s > 0)
	mvprintw(x + 4, y, "%s", tab[4]);
      s = s - 1;
      if (s > 0)
	mvprintw(x + 5, y, "%s", tab[5]);
      refresh();
      boucle(x, y, i, z, stock);
      j = j + 1;
    }
  endwin();
  return (0);
}

int	boucle(int x, int y, int i, int z, char *stock)
{
  int   s;
  int   ds;
  int   m;

  s = 1;
  ds = 0;
  m = 0;
  while (1)
    {
      if (s > 9)
	{
	  if (ds > 5)
	    {
	      if (m > 9)
		m = 0;
	      m = m + 1;
	      ds = 0;
	    }
	  ds = ds + 1;
	  s = 0;
	}
      s = s + 1;
      fct_timer(s, ds, m);
      sleep(1);
      if (x <= i)
	algo(x, y, z, stock);
      else
	return (0);
      x = x + 1;
    }
  return (0);
}

int	stock_map(char *str)
{
  int	i;
  int	j;
  char	*stock;

  i = 0;
  j = 0;
  if ((stock = malloc(sizeof(char) * my_strlen(str))) == NULL)
    return (-1);
  while (str[i])
    {
      if (str[i] >= '0' && str[i] <= '9')
	{
	  while (str[i] != '*')
	    {
	      stock[j] = str[i];
	      j = j + 1;
	      i = i + 1;
	    }
	  return (my_getnbr(stock));
	}
      i = i + 1;
    }
  return (0);
}

char	**print_tetris(char **tab, char *str)
{
  char	**tab2;
  char	*s;

  if ((s = malloc(sizeof(char) * 10000)) == NULL)
    return (NULL);
  print_tetris_letter();
  attroff(COLOR_PAIR(1));
  attroff(COLOR_PAIR(2));
  attroff(COLOR_PAIR(3));
  attroff(COLOR_PAIR(4));
  attroff(COLOR_PAIR(5));
  attroff(COLOR_PAIR(6));
  attroff(COLOR_PAIR(7));
  tab2 = my_str_to_wordtab(tetris_tab(s, str));
  move(8, 0);
  return (tab2);
}

char	*stock_level(char *str)
{
  char	*buf;
  int	i;
  int	j;

  i = 0;
  j = 0;
  if ((buf = malloc(sizeof(char) * my_strlen(str) + 1)) == NULL)
    return (NULL);
  while (str[i])
    {
      if (str[i] >= '0' && str[i] <= '9')
	{
	  while (str[i] >= '0' && str[i] <= '9')
	    {
	      buf[j] = str[i];
	      i = i + 1;
	      j = j + 1;
	    }
	}
      i = i + 1;
    }
  return (buf);
}

int	fct_timer(int s, int ds, int m)
{
  mvprintw(39, 20, "0%d:%d%d", m, ds, s);
  refresh();
  return (0);
}
