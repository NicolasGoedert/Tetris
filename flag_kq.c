/*
** flag_kq.c for flag kq in /home/clement/UnixSystemProgrammation/Tetris/PSU_2016_tetris
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Fri Feb 24 15:50:35 2017 clement girard
** Last update Thu Mar  2 01:31:24 2017 clement girard
*/

#include "include/my.h"
#include "include/gnl.h"
#include "include/tetris.h"

char    **my_flag_kq(int y, char **av, char **tab)
{
  char  *str;
  char  *stock;
  char  *res;
  int	i;

  if ((stock = malloc(sizeof(char) * 100)) == NULL)
    return (NULL);
  str = "Key Quit :  ";
  if ((res = malloc(sizeof(char) * my_strlen(str) + my_strlen(stock) + 1)) == NULL)
    return (NULL);
  i = 0;
  while (av[y][i])
    {
      if (av[y][i] == '=')
	{
	  stock = my_stock_equal(av, stock, y, i + 1);
	  res = my_strcat(res, str);
	  res = my_strcat(res, stock);
	  tab[4] = res;
	  return (tab);
	}
      i = i + 1;
    }
  stock = av[y + 1];
  res = my_strcat(res, str);
  res = my_strcat(res, stock);
  tab[4] = res;
  return (tab);
}
