/*
** my_strlowcase.c for my_strlowcase in /home/clement/Piscine/CPool_Day06
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Mon Oct 10 10:48:38 2016 clement girard
** Last update Mon Oct 10 10:56:00 2016 clement girard
*/

char	*my_strlowcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 'A' && str[i] <= 'Z')
	str[i] = str[i] + 32;
      i = i + 1;
    }
  return (str);
}
