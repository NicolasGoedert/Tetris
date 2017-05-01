/*
** my_square_root.c for my_square_root in /home/clement/Piscine
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Fri Oct  7 10:02:58 2016 clement girard
** Last update Fri Oct  7 10:06:54 2016 clement girard
*/

int	my_square_root(int nb)
{
  int	i;

  i = 0;
  while (i * i < nb)
    i = i + 1;
  if (i * i == nb)
    return (i);
  else
    return (0);

}
