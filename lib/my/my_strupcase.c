/*
** my_strupcase.c for my_strupcase in /home/clement/Piscine/CPool_Day06
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Mon Oct 10 10:19:15 2016 clement girard
** Last update Mon Oct 10 10:51:26 2016 clement girard
*/

char	*my_strupcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 97 && str[i] <= 122)
	str[i] = str[i] - 32;
      i = i + 1;
    }
  return (str);
}
