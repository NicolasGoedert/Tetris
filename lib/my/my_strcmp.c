/*
** my_strcmp.c for my_strcmp in /home/clement/Piscine/CPool_Day06
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Mon Oct 10 10:00:01 2016 clement girard
** Last update Mon Oct 10 10:03:50 2016 clement girard
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] != '\0' && s2[i] != '\0')
    {
      if (s1[i] != s2[i])
	return (s1[i] - s2[i]);
      i = i + 1;
    }
  return (s1[i] - s2[i]);
}
