/*
** my_sort_int_tab.c for my_sort_int_tab in /home/clement/Piscine/CPool_Day04
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Thu Oct  6 23:07:25 2016 clement girard
** Last update Thu Oct  6 23:14:40 2016 clement girard
*/

void	my_sort_int_tab(int *tab, int size)
{
  int	a;
  int	b;
  int	ptr;

  a = 1;
  while (a < size)
    {
      b = a;
      while (b > 0)
	{
	  if (tab[b] < tab[b - 1])
	    {
	      ptr = tab[b];
	      tab[b] = tab[b - 1];
	      tab[b - 1] = ptr;
	    }
	  b = b - 1;
	}
      a = a + 1;
    }
}
