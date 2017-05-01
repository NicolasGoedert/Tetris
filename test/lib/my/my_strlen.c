/*
** my_strlen.c for my_strlen in /home/clement/Piscine/CPool_Day04
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Thu Oct  6 10:16:46 2016 clement girard
** Last update Thu Oct  6 17:21:49 2016 clement girard
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i = i + 1;
  return (i);
}
