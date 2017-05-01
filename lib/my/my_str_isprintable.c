/*
** my_str_isprintable.c for my_str_isprintable in /home/clement/Piscine/CPool_Day06
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Mon Oct 10 12:40:01 2016 clement girard
** Last update Mon Oct 10 12:43:05 2016 clement girard
*/

int	my_str_isprintable(char *str)
{
  int	i;
  int	result;

  i = 0;
  result = 1;
  while (str[i] != '\0')
    {
      if (str[i] > 31 && str[i] <= 126)
	i = i + 1;
      else
	{
	  result = 0;
	  i = i + 1;
	}
    }
  return (result);
}
