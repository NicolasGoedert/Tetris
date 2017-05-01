/*
** fct_tetriminos.c for tetrminos in /home/clement/UnixSystemProgrammation/Tetris/PSU_2016_tetris
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Tue Feb 21 13:57:30 2017 clement girard
** Last update Wed Mar  8 20:28:55 2017 clement girard
*/

#include "include/my.h"
#include "include/gnl.h"
#include "include/tetris.h"

char	**fct_tetrimino(char **tab)
{
  int	i;
  int	j;
  int	x;

  x = count_files();
  i = 0;
  j = 0;
  my_putstr("Tetriminos : ");
  my_put_nbr(x - 2);
  my_putchar('\n');
  tab = name_files(tab);
  tab = my_sort_tab(tab);
  while (tab[j])
    j = j + 1;
  j = j - 1;
  while (tab[j - 1] && i != x)
    {
      fct_read_tetriminos(tab[j]);
      j = j - 1;
      i = i + 1;
    }
  return (tab);
}

int	fct_read_tetriminos(char *str)
{
  int   fd;
  char	*buf;
  char	*stock;
  char	*s;

  if ((buf = malloc(sizeof(char) * 100)) == NULL)
    return (-1);
  if ((stock = malloc(sizeof(char) * 1000)) == NULL)
    return (-1);
  buf = my_strcpy(buf, "tetriminos/");
  buf = my_strcat(buf, str);
  if ((fd = open(buf, O_RDONLY)) == -1)
    return (-1);
  if (read(fd, stock, 1000) == -1)
    return (-1);
  if ((s = malloc(sizeof(char) * my_strlen(str))) == NULL)
    return (-1);
  if (check_file(stock, str) == -1)
    {
      s = cut_buf(str);
      my_putstr("Tetriminos : Name ");
      my_putstr(s);
      my_putstr(" : Error\n");
    }
  return (0);
}

int     count_files()
{
  struct dirent *fichier;
  DIR   *rep;
  int   i;

  rep = NULL;
  fichier = NULL;
  i = 0;
  rep = opendir("tetriminos");
  fichier = readdir(rep);
  while (fichier != NULL)
    {
      fichier = readdir(rep);
      i = i + 1;
    }
  return (i);
}

char	**name_files(char **tab)
{
  struct dirent *fichier;
  DIR   *rep;
  int   i;

  if ((tab = malloc(sizeof(char*) * (my_len_malloc() + 1))) == NULL)
    return (NULL);
  rep = NULL;
  fichier = NULL;
  i = 0;
  rep = opendir("tetriminos");
  fichier = readdir(rep);
  while (fichier != NULL)
    {
      if (fichier->d_name[0] == '.')
	fichier = readdir(rep);
      else
	{
	  tab[i] = fichier->d_name;
	  fichier = readdir(rep);
	  i = i + 1;
	}
    }
  return (tab);
}

char            **my_sort_tab(char **tab)
{
  int           a;
  int           b;
  int           size;
  char          *ptr;

  a = 1;
  size = my_len_malloc();
  while (a < size)
    {
      b = a;
      while (b > 0)
	{
	  if ((my_strcmp(tab[b], tab[b - 1])) > 0)
	    {
	      ptr = tab[b];
	      tab[b] = tab[b - 1];
	      tab[b - 1] = ptr;
	    }
	  b = b - 1;
	}
      a = a + 1;
    }
  return (tab);
}
