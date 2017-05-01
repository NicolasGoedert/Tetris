/*
** my_power_rec.c for my_power_rec in /home/clement/Piscine
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Fri Oct  7 09:48:49 2016 clement girard
** Last update Fri Oct  7 10:02:22 2016 clement girard
*/

int	my_power_rec(int nb, int p)
{
  int	result;

  result = 1;
  if (p < 0)
    return (0);
  if (p == 0)
    return (1);
  p = p - 1;
  result = nb * my_power_rec(nb, p);
  return (result);
}
