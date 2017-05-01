/*
** my_strstr.c for my_strstr in /home/clement/Piscine/CPool_Day06
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Mon Oct 10 09:44:31 2016 clement girard
** Last update Tue Oct 11 17:31:32 2016 clement girard
*/

char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int	k;
  char	*result;
  int	save;

  i = 0;
  result = 0;
  if (to_find[0] != '\0')
    {
      while (str[i] != '\0')
	{
	  k = 0;
	  save = i;
	  while (str[i++] == to_find[k++])
	    {
	      if (to_find[k] == '\0')
		return (str + save);
	    }
	  if (to_find[k] != str[i])
	    i = (i - k) + 1;
	}
    }
  else if (to_find[0] == '\0')
    result = str;
  return (result);
}
