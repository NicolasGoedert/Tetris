/*
** check.c for check in /home/clement/UnixSystemProgrammation/Tetris/PSU_2016_tetris
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Wed Mar  1 15:52:20 2017 clement girard
** Last update Fri Mar 10 12:06:57 2017 clement girard
*/

#include "include/my.h"
#include "include/gnl.h"
#include "include/tetris.h"

int	check_file(char *str, char *buf)
{
  char	**tab;
  int	j;

  j = 0;
  tab = my_str_to_wordtab(str);
  while (tab[0][j])
    {
      if (tab[0][j] == ' ' || (tab[0][j] >= '1' && tab[0][j] <= '9'))
	j = j + 1;
      else
	return (-1);
    }
  stock_nb(tab, buf);
  return (0);
}

int	check_line(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] == '*')
	return (-1);
      i = i + 1;
    }
  return (0);
}

void	stock_nb(char **tab, char *buf)
{
  int	x;
  int	y;
  int	i;
  int	j;
  int	s;

  x = tab[0][0] - 48;
  y = tab[0][2] - 48;
  i = 1;
  j = 0;
  s = j;
  while (tab[i])
    {
      j = 0;
      while (tab[i][j])
	j = j + 1;
      if (j > s)
	s = j;
      i = i + 1;
    }
  if (x == s && y == i - 1)
    puttab_tetriminos(tab, buf);
  else
    puttab_error(buf);
}

int	puttab_error(char *buf)
{
  char	*stock;

  if ((stock = malloc(sizeof(char) * my_strlen(buf))) == NULL)
    return (-1);
  stock = cut_buf(buf);
  my_putstr("Tetriminos : Name ");
  my_putstr(stock);
  my_putstr(" : Error\n");
  return (0);
}

int	puttab_tetriminos(char **tab, char *buf)
{
  int	i;
  int	j;
  char  *stock;

  if ((stock = malloc(sizeof(char) * my_strlen(buf))) == NULL)
    return (-1);
  i = 1;
  stock = cut_buf(buf);
  my_putstr("Tetriminos : Name ");
  my_putstr(stock);
  my_putstr(" : Size ");
  my_put_nbr(tab[0][0] - 48);
  my_putchar('*');
  my_put_nbr(tab[0][2] - 48);
  my_putstr(" : Color ");
  my_put_nbr(tab[0][4] - 48);
  my_putstr(" :\n");
  while (tab[i])
    {
      j = 0;
      while (tab[i][j])
	{
	  while (tab[i][j] != '*')
	    {
	      my_putchar(tab[i][j]);
	      j = j + 1;
	    }
	  while (tab[i][j] == '*' || (tab[i][j] == ' ' && tab[i][j + 1] != '\0'))
	    {
	      my_putchar(tab[i][j]);
	      j = j + 1;
	    }
	  j = j + 1;
	}
      my_putchar('\n');
      i = i + 1;
    }
  return (0);
}

char	*cut_buf(char *buf)
{
  int	i;
  int	j;
  char	*str;

  if ((str = malloc(sizeof(char) * my_strlen(buf) + 1)) == NULL)
    return (NULL);
  i = 0;
  j = 0;
  while (buf[i] && buf[i] != '.')
    {
      str[j] = buf[i];
      i = i + 1;
      j = j + 1;
    }
  return (str);
}
