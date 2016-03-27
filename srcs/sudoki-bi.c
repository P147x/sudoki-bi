/*
** sudoki-bi.c for sudoki-bi in /home/gerard_v/rendu/sudoki-bi/srcs
** 
** Made by Valentin GERARD
** Login   <gerard_v@epitech.net>
** 
** Started on  Fri Feb 26 20:36:35 2016 Valentin GERARD
** Last update Sun Feb 28 18:58:05 2016 Valentin GERARD
*/

#include "sudoki.h"
#include "sudoki_solver.h"

void	init_list(t_list_cell *cell_array)
{
  cell_array->size = 0;
  cell_array->first = NULL;
  cell_array->last = NULL;
}

int	fill_list(t_list_cell *cell_array, int grid[9][9])
{
  int	x;
  int	y;

  y = 0;
  while (y < 9)
    {
      x = 0;
      while (x < 9)
	{
	  if (grid[y][x] == 0)
	    if (add_element(cell_array, x, y) == 1)
	      return (1);
	  x++;
	}
      y++;
    }
  return (0);
}

bool	backtracking(int grid[9][9], t_cell *cell, t_list_cell *cell_array)
{
  int	i;
  int	j;
  int	k;

  if (cell == NULL)
    return (true);
  i = cell->y;
  j = cell->x;
  k = 0;
  while (k < 9)
    {
      if (!cell_array->on_line[i][k] && !cell_array->on_column[j][k] &&
	  !cell_array->on_block[3 * (i / 3) + (j / 3)][k])
	{
	  change_bool_true(cell_array, i, j, k);
	  if (backtracking(grid, cell->next, cell_array))
	    {
	      grid[i][j] = k + 1;
	      return (true);
	    }
	  change_bool_false(cell_array, i, j, k);
	}
      k++;
    }
  return (false);
}

int	backtracking_handler(t_list_cell *cell_array, t_sudoki *sudoki,
			     int space)
{
  if (space == 1)
    my_putstr(1, "####################\n");
  init_list(cell_array);
  init_bool(cell_array);
  init_cell(cell_array, sudoki->bi);
  if (fill_list(cell_array, sudoki->bi) == 1)
    return (1);
  if (backtracking(sudoki->bi, cell_array->first, cell_array) == false)
    print_wrong_board();
  else
    print_board(sudoki);
  free_list(cell_array);
  return (0);
}

int		main(void)
{
  t_sudoki	sudoki;
  t_list_cell	cell_array;
  int		ret;
  int		space;

  space = 0;
  while (1)
    {
      if ((ret = s_init(&sudoki)) == 2)
	return (1);
      else if (ret == 0)
	{
	  if (backtracking_handler(&cell_array, &sudoki, space) == 1)
	    return (1);
	}
      space = 1;
    }
  return (0);
}
