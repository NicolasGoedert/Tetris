/*
** my_swap.c for my_swap in /home/clement/Piscine/CPool_Day04
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Thu Oct  6 09:19:25 2016 clement girard
** Last update Thu Oct  6 17:10:17 2016 clement girard
*/

int	my_swap(int *a, int *b)
{
  int	i;

  i = *a;
  *a = *b;
  *b = i;
  return (0);
}
