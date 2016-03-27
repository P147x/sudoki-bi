/*
** bool.c for sudoki-bi in /home/gerard_v/rendu/sudoki-bi/srcs
**
** Made by Valentin GERARD
** Login   <gerard_v@epitech.net>
**
** Started on  Fri Feb 26 20:34:26 2016 Valentin GERARD
** Last update Sun Feb 28 18:40:56 2016 Valentin GERARD
*/

#include "sudoki_solver.h"

void	init_cell(t_list_cell *cell_array, int grid[9][9])
{
  int	x;
  int	y;
  int	k;

  y = 0;
  while (y < 9)
    {
      x = 0;
      while (x < 9)
	{
	  if ((k = grid[y][x]) != 0)
	    {
	      cell_array->on_line[y][k - 1] = true;
	      cell_array->on_column[x][k - 1] = true;
	      cell_array->on_block[3 * (y / 3) + (x / 3)][k - 1] = true;
	    }
	  x++;
	}
      y++;
    }
}

void	init_bool(t_list_cell *cell_array)
{
  int	x;
  int	y;

  y = 0;
  while (y < 9)
    {
      x = 0;
      while (x < 9)
	{
	  cell_array->on_line[y][x] = false;
	  cell_array->on_column[y][x] = false;
	  cell_array->on_block[y][x] = false;
	  x++;
	}
      y++;
    }
}

void	change_bool_true(t_list_cell *cell_array, int i, int j, int k)
{
  cell_array->on_line[i][k] = true;
  cell_array->on_column[j][k] = true;
  cell_array->on_block[3 * (i / 3) + (j / 3)][k] = true;
}

void	change_bool_false(t_list_cell *cell_array, int i, int j, int k)
{
  cell_array->on_line[i][k] = false;
  cell_array->on_column[j][k] = false;
  cell_array->on_block[3 * (i / 3) + (j / 3)][k] = false;
}
