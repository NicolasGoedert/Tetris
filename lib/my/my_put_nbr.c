/*
** my_put_nbr.c for my_put_nbr in /home/clement/Piscine/CPool_Day03
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Wed Oct  5 11:29:27 2016 clement girard
** Last update Sat Oct 29 07:51:09 2016 clement girard
*/

void	my_putchar(char c);

int	my_put_nbr(int nb)
{
  long int	i;

  i = nb;
  if (i < 0)
    {
      my_putchar('-');
      i = i * -1;
    }
  if (i >= 10)
    {
      my_put_nbr(i / 10);
    }
  i = i % 10 + '0';
  my_putchar(i);
}
