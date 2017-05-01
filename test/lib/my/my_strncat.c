/*
** my_strncat.c for my_strncat in /home/clement/Piscine/CPool_Day07/lib/my
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Tue Oct 11 09:24:17 2016 clement girard
** Last update Tue Oct 11 09:26:51 2016 clement girard
*/

char	*my_strncat(char *dest, char *src, int nb)
{
  int	i;
  int	j;

  i = 0;
  while (dest[i] != '\0')
    i = i + 1;
  j = 0;
  while (src[j] != '\0' && j < nb)
    {
      dest[i] = src[j];
      i = i + 1;
      j = j + 1;
    }
  dest[i] = '\0';
  return (dest);
}
