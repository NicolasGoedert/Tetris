/*
** my_find_prime_sup.c for my_find_prime_sup in /home/clement/Piscine
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Fri Oct  7 10:12:13 2016 clement girard
** Last update Mon Oct 10 14:22:04 2016 clement girard
*/

int	my_find_prime_sup(int nb)
{
  int	i;

  i = 2;
  if (nb <= 2)
    return (2);
  while (i != nb)
    {
      i = 2;
      while (nb % i != 0 && i < nb)
	i = i + 1;
      if (i != nb)
	nb = nb + 1;
    }
  return (nb);
}
