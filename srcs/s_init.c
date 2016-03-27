/*
** s_init.c for sudoki-bi in /home/debout_l/rendu/sudoki-bi/srcs
** 
** Made by DEBOUTÉ Lucas
** Login   <debout_l@epitech.net>
** 
** Started on  Fri Feb 26 21:46:03 2016 DEBOUTÉ Lucas
** Last update Mon Feb 29 05:19:01 2016 Lucas DEBOUTÉ
*/

#include "sudoki.h"

int	s_init(t_sudoki *sudoki)
{
  int	tmp;

  if ((tmp = s_stock(sudoki)) == 2)
    return (2);
  if (tmp == 1 || s_check(sudoki) == 1)
    {
      my_putstr(1, "MAP ERROR\n\n");
      return (1);
    }
  return (0);
}
