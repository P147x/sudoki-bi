/*
** print_board.c for sudoki-bi in /home/debout_l/rendu/sudoki-bi/srcs
** 
** Made by DEBOUTÉ Lucas
** Login   <debout_l@epitech.net>
** 
** Started on  Sat Feb 27 16:30:18 2016 DEBOUTÉ Lucas
** Last update Sun Feb 28 17:54:21 2016 Valentin GERARD
*/

#include <stdlib.h>
#include "sudoki.h"

void	print_wrong_board(void)
{
  int	i;

  i = 0;
  my_putstr(1, "|------------------|\n");
  while (i != 9)
    {
      my_putstr(1, "| X X X X X X X X X|\n");
      i += 1;
    }
  my_putstr(1, "|------------------|\n");
}

void	print_board(t_sudoki *sudoki)
{
  int	x;
  int	y;

  y = 0;
  my_putstr(1, "|------------------|\n");
  while (y != 9)
    {
      my_putchar('|');
      x = 0;
      while (x != 9)
	{
	  my_putchar(' ');
	  my_putchar(sudoki->bi[y][x] + 48);
	  x += 1;
	}
      my_putchar('|');
      my_putchar('\n');
      y += 1;
    }
  my_putstr(1, "|------------------|\n");
}
