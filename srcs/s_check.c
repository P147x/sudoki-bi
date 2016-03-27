/*
** s_check.c for sudoki-bi in /home/debout_l/rendu/sudoki-bi/srcs
** 
** Made by DEBOUTÉ Lucas
** Login   <debout_l@epitech.net>
** 
** Started on  Sat Feb 27 01:00:54 2016 DEBOUTÉ Lucas
** Last update Sun Feb 28 17:52:25 2016 Valentin GERARD
*/

#include "sudoki.h"

int	s_check_line(t_sudoki *sudoki, int y)
{
  int	x;

  x = 0;
  while (x != 9)
    {
      if (sudoki->bi[y][x] == 32)
	sudoki->bi[y][x] = 0;
      else if (sudoki->bi[y][x] > '0' && sudoki->bi[y][x] <= '9')
	sudoki->bi[y][x] -= 48;
      else
	return (1);
      x += 1;
    }
  return (0);
}

int	s_check(t_sudoki *sudoki)
{
  int	y;

  y = 0;
  while (y != 9)
    {
      if (s_check_line(sudoki, y) == 1)
	return (1);
      y += 1;
    }
  return (0);
}
