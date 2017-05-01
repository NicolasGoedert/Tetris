/*
** flag.c for flag in /home/clement/UnixSystemProgrammation/Tetris/PSU_2016_tetris
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Mon Feb 20 22:43:47 2017 clement girard
** Last update Fri Mar 17 14:15:00 2017 clement girard
*/

#include "include/my.h"
#include "include/gnl.h"
#include "include/tetris.h"
#include "include/struct.h"

int	my_flag_d(char **av)
{
  char	*str;
  char	a;
  char	**stock_tab;
  char	**tab;
  char	**tab2;
  char	**tetri_tab;
  int	i;
  int	j;
  int	x;
  int	c;

  str = "-l\n-kl\n-kr\n-kt\n-kd\n-kq\n-kp\n-map-size\n-w\n";
  tab = my_str_to_wordtab(str);
  str = "--level\n--key-left\n--key-right\n--key-turn\n--key-drop\n--key-quit\n--key-pause\n--map-size\n--without-next\n";
  tab2 = my_str_to_wordtab(str);
  str = "Key Left : ^EOD\nKey Right : ^EOC\nKey Turn : ^EOA\nKey Drop : ^EOB\nKey Quit : q\nKey Pause : (space)\nNext : Yes\nLevel : 1\nSize : 20*10\n";
  stock_tab = my_str_to_wordtab(str);
  i = 0;
  j = 0;
  c = 0;
  while (tab[i] && av[j] && tab2[i])
    {
      x = 0;
      if ((my_strcmp(tab[i], av[j]) == 0)
	  || (my_strncmp(tab2[i], av[j], my_strlen(tab2[i]) - 1) == 0))
	{
	  c = i;
	  stock_tab = fct[c](j, av, stock_tab);
	  j = j + 1;
	  x = 1;
	}
      else if ((my_strcmp(av[j], "-w") == 0)
	       || (my_strcmp(av[j], "--without-next") == 0))
	{
	  stock_tab = my_flag_w(j, av, stock_tab);
	  j = j + 1;
	  x = 1;
	}
      if (x == 0)
	i = i + 1;
      else
	i = 0;
      if (tab[i + 1] == NULL || tab2[i + 1] == NULL)
	{
	  i = 0;
	  j = j + 1;
	}
    }
  puttab(stock_tab);
  tetri_tab = fct_tetrimino(tetri_tab);
  tetri_tab = good_tetrimino(tetri_tab);
  my_putstr("Press any key to start Tetris\n");
  getchar();
  fct_ncurses(stock_tab, tetri_tab);
  return (0);
}

char	**good_tetrimino(char **tab)
{
  int	i;

  i = 0;
  while (tab[i])
    {
      tab = check_tab(tab[i], tab, i);
      i = i + 1;
    }
  return (tab);
}

char	**check_tab(char *str, char **tab, int i)
{
  char	*buf;
  int	fd;
  char	*stock;

  if ((buf = malloc(sizeof(char) * 100)) == NULL)
    return (NULL);
  if ((stock = malloc(sizeof(char) * 1000)) == NULL)
    return (NULL);
  buf = my_strcpy(buf, "tetriminos/");
  buf = my_strcat(buf, str);
  if ((fd = open(buf, O_RDONLY)) == -1)
    return (NULL);
  if (read(fd, stock, 1000) == -1)
    return (NULL);
  tab = error_or_not(stock, tab, i);
  return (tab);
}

char	**error_or_not(char *stock, char **tab, int i)
{
  int	j;
  char	**tab2;

  tab2 = my_str_to_wordtab(stock);
  j = 0;
  while (tab2[0][j])
    {
      if (tab2[0][j] == ' ' || (tab2[0][j] >= '1' && tab2[0][j] <= '9'))
	j = j + 1;
      else
	{
	  tab[i] = "error";
	  j = j + 1;
	}
    }
  return (tab);
}
