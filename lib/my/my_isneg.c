/*
** my_isneg.c for my_isneg in /home/clement/Piscine/CPool_Day03
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Wed Oct  5 09:45:10 2016 clement girard
** Last update Thu Oct  6 09:52:42 2016 clement girard
*/

void	my_putchar(char c);

int	my_isneg(int n)
{
  if (n < 0)
    my_putchar('N');
  else if (n >= 0)
    my_putchar('P');
  return (0);
}
