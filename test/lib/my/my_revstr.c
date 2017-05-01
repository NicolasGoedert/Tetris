/*
** my_revstr.c for my_revstr in /home/clement/Piscine/CPool_Day06
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Mon Oct 10 09:39:52 2016 clement girard
** Last update Mon Oct 10 09:44:06 2016 clement girard
*/

int	my_swap1(char *a, char *b)
{
  char	i;

  i = *a;
  *a = *b;
  *b = i;
}

char	*my_revstr(char *str)
{
  int	i;
  int	j;

  i = 0;
  j = 1;
  while (str[i] != 0)
    i = i + 1;
  while (j <= i / 2)
    {
      my_swap1(&str[j - 1], &str[i - j]);
      j = j + 1;
    }
  return (str);
}
