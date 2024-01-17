/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:33:06 by jtollena          #+#    #+#             */
/*   Updated: 2024/01/17 10:55:20 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAD_H
# define HEAD_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <math.h>

typedef struct s_circle {
	char	type;
	float	x;
	float	y;
	float	radius;
	char	color;
}	t_circle;

typedef struct s_pixel {
	char	color;
	int		x;
	int		y;
}	t_pixel;

typedef struct s_board {
	t_pixel	*pixels;
	char	color;
	int		width;
	int		height;
}	t_board;


#endif