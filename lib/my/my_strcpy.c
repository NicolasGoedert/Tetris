/*
** my_strcpy.c for my_strcpy in /home/clement/Piscine/CPool_Day06
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Mon Oct 10 09:04:46 2016 clement girard
** Last update Mon Oct 10 14:01:15 2016 clement girard
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = src[i];
  return (dest);
}
