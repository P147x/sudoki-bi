/*
** s_verify.c for sudoki-bi in /home/debout_l/rendu/sudoki-bi/srcs
** 
** Made by DEBOUTÉ Lucas
** Login   <debout_l@epitech.net>
** 
** Started on  Sat Feb 27 03:37:59 2016 DEBOUTÉ Lucas
** Last update Sat Feb 27 04:05:32 2016 DEBOUTÉ Lucas
*/

int	s_verify_horizontaly(t_sudoki *sudoki)
{
  int	x;
  int	y;

  y = 0;
  while (y != 9)
    {
      x = 0;
      while (x != 9)
	{
	  x += 1;
	}
    }
}

int	s_verify(t_sudoki *sudoki)
{
  if (s_verify_horizontaly(sudoki) == 1)
    return (1);
}
