/*
** sudoki.h for sudoki-bi in /home/gerard_v/rendu/sudoki-bi/include
**
** Made by Valentin GERARD
** Login   <gerard_v@epitech.net>
**
** Started on  Fri Feb 26 20:34:26 2016 Valentin GERARD
** Last update Sun Feb 28 18:40:01 2016 Valentin GERARD
*/

#ifndef SUDOKI_SOLVER_H_
# define SUDOKI_SOLVER_H_

# include <stdlib.h>
# include <stdbool.h>
# include <stdio.h>
# include <unistd.h>

typedef struct	s_cell
{
  int		x;
  int		y;
  struct s_cell	*next;
  struct s_cell	*prev;
}		t_cell;

typedef struct	s_list_cell
{
  int		size;
  bool		on_line[9][9];
  bool		on_column[9][9];
  bool		on_block[9][9];
  t_cell	*first;
  t_cell	*last;
}		t_list_cell;

void	change_bool_true(t_list_cell *cell_array, int i, int j, int k);
void	change_bool_false(t_list_cell *cell_array, int i, int j, int k);
int	add_element(t_list_cell *cell_array, int x, int y);
void	init_bool(t_list_cell *cell_array);
void	init_cell(t_list_cell *cell_array, int grid[9][9]);
void	print_grid(int grid[9][9]);
void	free_list(t_list_cell *cell_array);

#endif /* !SUDOKI_H_ */
