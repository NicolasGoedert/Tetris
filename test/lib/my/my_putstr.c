/*
** my_putstr.c for my_putstr in /home/clement/Piscine/CPool_Day04
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Thu Oct  6 09:41:13 2016 clement girard
** Last update Thu Dec 15 12:39:11 2016 clement girard
*/

#include <unistd.h>
#include "my.h"

int	my_putstr(char *str)
{
  int	i;

  i = my_strlen(str);
  write(1, str, i);
  return (0);
}
