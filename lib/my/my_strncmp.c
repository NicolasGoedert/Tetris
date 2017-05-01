/*
** my_strncmp.c for my_strncmp in /home/clement/Piscine/CPool_Day06
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Mon Oct 10 10:10:35 2016 clement girard
** Last update Mon Oct 10 10:16:15 2016 clement girard
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  while (s1[i] != '\0' && s2[i] != '\0' && i < n)
    {
      if (s1[i] != s2[i])
	return (s1[i] - s2[i]);
      i = i + 1;
    }
  return (s1[i] - s2[i]);
}
