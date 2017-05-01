/*
** algo.c for algo in /home/clement/UnixSystemProgrammation/Tetris/PSU_2016_tetris
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Thu Mar  2 14:15:01 2017 clement girard
** Last update Mon Mar  6 15:52:25 2017 clement girard
*/

#include "include/my.h"
#include "include/gnl.h"
#include "include/tetris.h"

int	algo(int x, int y, int z, char *stock)
{
  char	**tab;
  int	s;

  s = z;
  tab = my_str_to_wordtab(stock);
  mvprintw(x + 1, y, "%s", tab[0]);
  s = s - 1;
  if (s > 0)
    mvprintw(x + 2, y, "%s", tab[1]);
  s = s - 1;
  if (s > 0)//&& check_line() == 0)
    mvprintw(x + 3, y, "%s", tab[2]);
  s = s - 1;
  if (s > 0)//&& check_line() == 0)
    mvprintw(x + 4, y, "%s", tab[3]);
  s = s - 1;
  if (s > 0)//&& check_line() == 0)
    mvprintw(x + 5, y, "%s", tab[4]);
  s = s - 1;
  if (s > 0)//&& check_line() == 0)
    mvprintw(x + 6, y, "%s", tab[5]);
  s = s - 1;
  if (s > 0)//&& check_line() == 0)
    mvprintw(x + 7, y, "%s", tab[6]);
  mvprintw(x, y, "       ");
  refresh();
  return (0);
}

char	*my_tetriminos(char **tab, int i)
{
  int	fd;
  char	*buf;
  char	*stock;

  if ((buf = malloc(sizeof(char) * 1000)) == NULL)
    return (NULL);
  if ((stock = malloc(sizeof(char) * 1000)) == NULL)
    return (NULL);
  buf = my_strcpy(buf, "tetriminos/");
  buf = my_strcat(buf, tab[i]);
  if ((fd = open(buf, O_RDONLY)) == -1)
    return (NULL);
  if (read(fd, stock, 1000) == -1)
    return (NULL);
  return (stock);
}

char	*just_stars(char *buf, int *z)
{
  char	*stock;
  int	i;
  int	j;

  i = 0;
  j = 0;
  if ((stock = malloc(sizeof(char) * 1000)) == NULL)
    return (NULL);
  while (buf[i] && buf[i] != '\n')
    i = i + 1;
  i = i + 1;
  while (buf[i])
    {
      stock[j] = buf[i];
      i = i + 1;
      j = j + 1;
      if (buf[i] == '\n')
	*z = *z + 1;
    }
  return (stock);
}
