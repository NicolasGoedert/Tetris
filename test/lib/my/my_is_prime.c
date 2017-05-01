/*
** my_is_prime.c for my_is_prime in /home/clement/Piscine
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Fri Oct  7 10:08:09 2016 clement girard
** Last update Fri Oct  7 10:11:48 2016 clement girard
*/

int	my_is_prime(int nb)
{
  int	i;

  i = 2;
  if (nb <= 1)
    return (0);
  while (nb % i != 0 && i < nb)
    i = i + 1;
  if (i == nb)
    return (1);
  else
    return (0);
}
