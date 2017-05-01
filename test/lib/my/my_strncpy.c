/*
** my_strncpy.c for my_strncpy in /home/clement/Piscine/CPool_Day06
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Mon Oct 10 09:31:32 2016 clement girard
** Last update Mon Oct 10 22:02:42 2016 clement girard
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (i < n && src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  while (i < n && dest[i] != '\0')
    {
      dest[i] = '\0';
      i = i + 1;
    }
  return (dest);
}
