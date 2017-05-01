/*
** main.c for main in /home/clement/UnixSystemProgrammation/Tetris/PSU_2016_tetris
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Mon Feb 20 16:44:19 2017 clement girard
** Last update Mon Feb 27 14:51:42 2017 clement girard
*/

#include "include/my.h"
#include "include/gnl.h"
#include "include/tetris.h"

int	main(int ac, char **av)
{
  int	j;

  j = 1;
  while (av[j])
    {
      if ((my_strcmp(av[j], "-d") == 0)
	  || (my_strcmp(av[j], "--debug") == 0))
	my_flag_d(av);
      if (my_strcmp(av[j], "--help") == 0)
	my_flag_h(av);
      j = j + 1;
    }
  return (0);
}
