/*
** my_strcapitalize.c for my_strcapitalize in /home/clement/Piscine/CPool_Day06
** 
** Made by clement girard
** Login   <clement@epitech.net>
** 
** Started on  Mon Oct 10 11:00:50 2016 clement girard
** Last update Mon Oct 10 14:15:59 2016 clement girard
*/

char	*my_strcapitalize(char *str)
{
  int	i;

  i = 0;
  if (str[0] >= 'a' && str[0] <= 'z')
    str[0] = str[0] - 32;
  while (str[i])
    {
      if ((str[i - 1] <= 'a' && str[i - 1] >= 'z')
	  || (str[i - 1] <= 'A' && str[i - 1] >= 'Z'))
	i = i + 1;
      {
	if (str[i] >= 'a' && str[i] <= 'z')
	  str[i] = str[i] - 32;

      }
      if ((str[i - 1] >= 'a' && str[i - 1] <= 'z')
	  || (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
	  || (str[i - 1] >= '0' && str[i - 1] <= '9'))
	{
	  if (str[i] >= 'A' && str[i] <= 'Z')
	    str[i] = str[i] + 32;
	}
      i = i + 1;
    }
  return (str);
}
