/*
** sudoki.h for sudoki-bi in /home/gerard_v/rendu/sudoki-bi/include
** 
** Made by Valentin GERARD
** Login   <gerard_v@epitech.net>
** 
** Started on  Fri Feb 26 20:34:26 2016 Valentin GERARD
** Last update Sun Feb 28 18:08:51 2016 DEBOUTÉ Lucas
*/

#ifndef SUDOKI_H_
# define SUDOKI_H_

# include "get_next_line.h"
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct	s_sudoki
{
  int		bi[9][9];
}		t_sudoki;

int	s_init(t_sudoki *sudoki);
int	s_stock(t_sudoki *sudoki);
int	s_fill_line(t_sudoki *sudoki, char *str, int y);
int	s_check(t_sudoki *sudoki);
int	s_check_line(t_sudoki *sudoki, int y);
void	print_wrong_board();
void	print_board(t_sudoki *sudoki);
void	my_putchar(char c);
void	my_putstr(int out, char *str);

#endif /* !SUDOKI_H_ */
