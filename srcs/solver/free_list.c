/*
** free_list.c for sudoki-bi in /home/gerard_v/rendu/sudoki-bi/srcs
**
** Made by Valentin GERARD
** Login   <gerard_v@epitech.net>
**
** Started on  Fri Feb 26 20:34:26 2016 Valentin GERARD
** Last update Sun Feb 28 13:50:55 2016 Valentin GERARD
*/

#include "sudoki_solver.h"

void		free_list(t_list_cell *cell_array)
{
  t_cell	*tmp1;
  t_cell	*tmp2;

  tmp1 = cell_array->first;
  while (tmp1)
    {
      tmp2 = tmp1;
      tmp1 = tmp1->next;
      free(tmp2);
    }
}
