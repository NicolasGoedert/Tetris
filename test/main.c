/*
** main.c for main in /home/clement/UnixSystemProgrammation/Tetris/test
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Tue Mar  7 11:33:19 2017 clement girard
** Last update Wed Mar 15 17:08:12 2017 clement girard
*/

#include "include/my.h"
#include "include/test.h"

int	main()
{
  char	*str;
  char	**tab;
  int	i;

  i = 0;
  str = malloc(10000);
  initscr();
  curs_set(0);
  noecho();
  str = tetris_tab(str, 10);
  tab = my_str_to_wordtab(str);
  move(0, 0);
  while (tab[i])
    {
      printw("%s\n", tab[i]);
      refresh();
      i = i + 1;
    }
  while (1)
    {
      mvprintw(1, 3, "*");
      refresh();
      tab[1][3] = '*';
      fct_touches(tab);
    }
  endwin();
  return (0);
}

int	fct_touches(char **tab)
{
  int	x;
  int	y;
  int	c;

  x = 1;
  y = 3;
  while (1)
    {
      c = getch();
      tab = check_line(tab);
      if (tab[x + 1][y] != '-' && tab[x + 1][y] != '*')
	tab = fct_down(tab, &x, y, c);
      if (tab[x - 1][y] != '-' && tab[x - 1][y] != '*')
	tab = fct_up(tab, &x, y, c);
      if (tab[x][y + 1] != '|' && tab[x][y + 1] != '*')
	tab = fct_right(tab, x, &y, c);
      if (tab[x][y - 1] != '|' && tab[x][y - 1] != '*')
	tab = fct_left(tab, x, &y, c);
      if (tab[x + 1][y] == '-' || tab[x + 1][y] == '*')
	return (0);
    }
  return (0);
}

char	**check_line(char **tab)
{
  int	i;
  int	j;
  int	x;
  int	y;

  i = 5;
  j = 1;
  while (tab[i][j] && tab[i][j] != '|')
    {
      if (tab[i][j] == '*')
	j = j + 1;
      else
	return (tab);
    }
  x = 1;
  while (tab[i][x + 1])
    {
      tab[i][x] = ' ';
      x = x + 1;
    }
  mvprintw(5, 0, "%s", tab[i]);
  return (tab);
}

char	**fct_left(char **tab, int x, int *y, int c)
{
  if (c == 68)
    {
      mvprintw(x, *y - 1, "*");
      tab[x][*y - 1] = '*';
      mvprintw(x, *y, " ");
      tab[x][*y] = ' ';
      refresh();
      *y = *y - 1;
    }
  return (tab);
}

char	**fct_right(char **tab, int x, int *y, int c)
{
  if (c == 67)
    {
      mvprintw(x, *y + 1, "*");
      tab[x][*y + 1] = '*';
      mvprintw(x, *y, " ");
      tab[x][*y] = ' ';
      refresh();
      *y = *y + 1;
    }
  return (tab);
}

char	**fct_up(char **tab, int *x, int y, int c)
{
  if (c == 65)
    {
      mvprintw(*x - 1, y, "*");
      tab[*x - 1][y] = '*';
      mvprintw(*x, y, " ");
      tab[*x][y] = ' ';
      refresh();
      *x = *x - 1;
    }
  return (tab);
}

char	**fct_down(char **tab, int *x, int y, int c)
{
  if (c == 66)
    {
      mvprintw(*x + 1, y, "*");
      tab[*x + 1][y] = '*';
      mvprintw(*x, y, " ");
      tab[*x][y] = ' ';
      refresh();
      *x = *x + 1;
    }
  return (tab);
}

char    *tetris_tab(char *tab, int x)
{
  int   i;
  int   b;
  int   j;
  int   y;

  b = 0;
  i = 0;
  y = 0;
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

char    *print_tab_score(char *tab, int *b)
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
