/*
** my_func.c for sudoki-bi in /home/debout_l/rendu/sudoki-bi/srcs
** 
** Made by DEBOUTÉ Lucas
** Login   <debout_l@epitech.net>
** 
** Started on  Sat Feb 27 16:33:37 2016 DEBOUTÉ Lucas
** Last update Sat Feb 27 17:14:57 2016 DEBOUTÉ Lucas
*/

#include "sudoki.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(int out, char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i += 1;
  write(out, str, i);
}
