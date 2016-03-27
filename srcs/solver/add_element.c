/*
** add_element.c for sudoki-bi in /home/gerard_v/rendu/sudoki-bi/srcs
**
** Made by Valentin GERARD
** Login   <gerard_v@epitech.net>
**
** Started on  Fri Feb 26 20:34:26 2016 Valentin GERARD
** Last update Sun Feb 28 18:49:06 2016 Valentin GERARD
*/

#include "sudoki_solver.h"

int		add_element_first(t_list_cell *cell_array, int x, int y)
{
  t_cell	*new_elem;

  new_elem = malloc(sizeof(t_cell));
  if (new_elem == NULL)
    return (1);
  new_elem->x = x;
  new_elem->y = y;
  new_elem->prev = cell_array->first;
  new_elem->next = cell_array->last;
  cell_array->first = new_elem;
  cell_array->last = new_elem;
  cell_array->size++;
  return (0);
}

int		add_element_last(t_list_cell *cell_array, int x, int y)
{
  t_cell	*new_elem;

  new_elem = malloc(sizeof(t_cell));
  if (new_elem == NULL)
    return (1);
  new_elem->x = x;
  new_elem->y = y;
  new_elem->next = NULL;
  new_elem->prev = cell_array->last;
  cell_array->last->next = new_elem;
  cell_array->last = new_elem;
  cell_array->size++;
  return (0);
}

int	add_element(t_list_cell *cell_array, int x, int y)
{
  if (cell_array->size == 0)
    {
      if (add_element_first(cell_array, x, y) == 1)
	return (1);
    }
  else if (cell_array->size > 0)
    {
      if (add_element_last(cell_array, x, y) == 1)
	return (1);
    }
  return (0);
}
