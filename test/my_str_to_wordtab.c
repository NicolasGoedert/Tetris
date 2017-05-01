/*
** my_str_to_wordtab.c for mystrtowordtab in /home/clement/UnixSystemProgrammation/My_Sokoban/PSU_2016_my_sokoban
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Thu Dec 15 17:39:28 2016 clement girard
** Last update Tue Mar  7 11:51:12 2017 clement girard
*/

#include <stdlib.h>
#include <stdio.h>
#include "include/my.h"
#include "include/test.h"

int	nb_lines(char *str)
{
  int	i;
  int	res;

  i = 0;
  res = 0;
  while (str[i])
    {
      if (str[i] == '\n')
	res = res + 1;
      i = i + 1;
    }
  return (res);
}

int	nb_char(char *str, int i)
{
  int	i_backup;

  i_backup = i;
  while (str[i] != '\n' && str[i] != '\0')
    i = i + 1;
  i = i - i_backup;
  return (i);
}

char	**my_str_to_wordtab(char *str)
{
  int	y;
  int	x;
  int	i;
  char	**tab;

  i = 0;
  y = 0;
  if ((tab = malloc(sizeof(char*) * (nb_lines(str) + 2))) == NULL)
    return (0);
  while (str[i])
    {
      if ((tab[y] = malloc(sizeof(char) * (nb_char(str, i) + 2))) == NULL)
	return (0);
      x = 0;
      while (str[i] != '\n' && str[i] != '\0')
	{
	  tab[y][x] = str[i];
	  i = i + 1;
	  x = x + 1;
	}
      if (str[i] == '\n' && str[i] != '\0')
	{
	  y = y + 1;
	  i = i + 1;
	}
    }
  return (tab);
}
