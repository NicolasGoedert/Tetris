/*
** divers.c for divers in /home/clement/UnixSystemProgrammation/Tetris/PSU_2016_tetris
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Tue Feb 21 23:13:54 2017 clement girard
** Last update Mon Mar  6 13:51:09 2017 clement girard
*/

#include "include/my.h"
#include "include/gnl.h"
#include "include/tetris.h"

void	print_tab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i])
    {
      printw("%s\n", tab[i]);
      i = i + 1;
    }
}

void	puttab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i])
    {
      my_putstr(tab[i]);
      my_putchar('\n');
      i = i + 1;
    }
}

int             my_len_malloc()
{
  DIR           *rep;
  struct dirent *fichier;
  int           i;

  fichier = NULL;
  rep = NULL;
  i = 0;
  rep = opendir("tetriminos");
  fichier = readdir(rep);
  while (fichier != NULL)
    {
      if (fichier->d_name[0] == '.')
	fichier = readdir(rep);
      else
	{
	  i = i + 1;
	  fichier = readdir(rep);
	}
    }
  return (i);
}

char    *my_stock_equal(char **av, char *stock, int y, int i)
{
  int   j;

  j = 0;
  while (av[y][i])
    {
      stock[j] = av[y][i];
      i = i + 1;
      j = j + 1;
    }
  return (stock);
}
