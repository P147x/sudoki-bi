/*
** s_stock.c for sudoki-bi in /home/debout_l/rendu/sudoki-bi/srcs
** 
** Made by DEBOUTÉ Lucas
** Login   <debout_l@epitech.net>
** 
** Started on  Sat Feb 27 00:50:33 2016 DEBOUTÉ Lucas
** Last update Sun Feb 28 18:13:08 2016 DEBOUTÉ Lucas
*/

#include "sudoki.h"

int	s_check_top(char *str)
{
  int	i;

  i = 1;
  if (str == NULL)
    return (2);
  if (str[0] != '|' || str[19] != '|')
    {
      while (i++ != 12)
	get_next_line(0);
      return (1);
    }
  while (i != 18)
    {
      if (str[i] != '-')
	{
	  while (i++ != 12)
	    get_next_line(0);
	  return (1);
	}
      i += 1;
    }
  free(str);
  return (0);
}

int	s_check_bot(char *str)
{
  int	i;

  i = 1;
  if (str[0] != '|' || str[19] != '|')
    return (1);
  while (i != 18)
    {
      if (str[i] != '-')
	{
	  get_next_line(0);
	  return (1);
	}
      i += 1;
    }
  free(str);
  return (0);
}

int    s_fill_line(t_sudoki *sudoki, char *str, int y)
{
  int   x;
  int   i;

  x = 0;
  i = 1;
  while (x != 9)
    {
      if (str[i] != ' ')
	return (1);
      i += 1;
      if (str[0] != '|' || str[19] != '|')
	return (1);
      sudoki->bi[y][x] = str[i];
      i += 1;
      x += 1;
    }
  return (0);
}

int    s_stock(t_sudoki *sudoki)
{
  int   y;
  int	tmp;
  char	*buffer;

  y = 0;
  if ((tmp = s_check_top(get_next_line(0))) == 2)
    return (2);
  else if (tmp == 1)
    return (1);
  while (y != 9)
    {
      buffer = get_next_line(0);
      if (buffer == NULL)
	return (1);
      if (s_fill_line(sudoki, buffer, y) == 1)
	{
	  free(buffer);
	  return (1);
	}
      free(buffer);
      y += 1;
    }
  if ((tmp = s_check_bot(get_next_line(0))) == 1)
    {
      return (1);
    }
  return (0);
}
