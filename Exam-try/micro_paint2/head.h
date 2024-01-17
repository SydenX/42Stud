#ifndef HEAD_H
# define HEAD_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_rect{
	float	x;
	float	y;
	float	width;
	float	height;
	char	color;
	char	type;
}	t_rect;

typedef struct s_pixel{
	int		x;
	int		y;
	char	color;
}	t_pixel;

typedef struct s_board{
	t_pixel *pixels;
	int		width;
	int		height;
	char	color;
}	t_board;

#endif