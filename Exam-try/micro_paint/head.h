/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 09:10:34 by jtollena          #+#    #+#             */
/*   Updated: 2024/01/11 10:17:29 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAD_H
# define HEAD_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_pixel{
	char 	type;
	float 	x;
	float 	y;
	float 	width;
	float 	height;
	char 	color;
}	t_pixel;

typedef struct s_area{
	t_pixel	*pixels;
	int		maxwidth;
	int		maxheight;
	size_t 	size;
} t_area;

#endif