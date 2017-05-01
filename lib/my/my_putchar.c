/*
** my_putchar.c for my_putchar in /home/clement/Piscine/CPool_Day07/lib/my
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Tue Oct 11 09:06:18 2016 clement girard
** Last update Tue Oct 11 09:07:00 2016 clement girard
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
