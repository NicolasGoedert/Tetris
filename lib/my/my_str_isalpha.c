/*
** my_str_isalpha.c for my_str_isalpha in /home/clement/Piscine/CPool_Day06
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Mon Oct 10 11:19:13 2016 clement girard
** Last update Mon Oct 10 12:38:38 2016 clement girard
*/

int	my_str_isalpha(char *str)
{
  int	i;
  int	result;

  i = 0;
  result = 1;
  while (str[i] != '\0')
    {
      if ((str[i] >= 'a' && str[i] <= 'z')
	  || (str[i] >= 'A' && str[i] <= 'Z'))
	i = i + 1;
      else
	{
	  result = 0;
	  i = i + 1;
	}
    }
  return (result);
}
