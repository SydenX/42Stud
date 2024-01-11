/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   micro_paint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 08:45:45 by jtollena          #+#    #+#             */
/*   Updated: 2024/01/11 13:53:41 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

void	error(char *str)
{
	while (*str){
		write(1, str, 1);
		str++;
	}
}

int getPixelPlace(t_area *area, int x, int y)
{
	size_t i = 0;
	while (i < area->size)
	{
		if (x == area->pixels[i].x && y == area->pixels[i].y)
			return (i);
		i++;
	}
	return (-1);
}

int writeArea(t_area *area)
{
	size_t i = 0;
	while (i < area->size)
	{
		printf("%c", area->pixels[i].color);
		if (area->pixels[i].x == area->maxwidth - 1 && area->pixels[i].y < area->maxheight - 1)
			printf("\n");
		i++;
	}
	printf("\n");
	return (0);
}

int isInBorder(float x, float y, t_pixel rec)
{
	if ((x - rec.x < 1.00000000 || (rec.width + rec.x) - x < 1.00000000) || (y - rec.y < 1.00000000 || (rec.height + rec.y) - y < 1.00000000))
		return (1);
	return (0);
}

int	isInRectangle(int border, int x, int y, t_pixel rec)
{
	float Xa = x;
	float Ya = y;
	float Xtl = rec.x;
	float Ytl = rec.y;
	float Xbr = rec.width + rec.x;
	float Ybr = rec.height + rec.y;

	if (Xtl <= Xa && Xa <= Xbr && Ytl <= Ya && Ya <= Ybr){
		if (border)
			return (isInBorder(x, y, rec));
		return (1);
	}
	return (0);
}

int	readFile(FILE *file, t_area	*area)
{
	t_pixel	tmp;
	int 	params;
	int		i = 0;
	int		pxplace;

	params = fscanf(file, "%c %f %f %f %f %c\n", &tmp.type, &tmp.x, &tmp.y, &tmp.width, &tmp.height, &tmp.color);
	while (params == 6)
	{
		i++;
		if (tmp.x < 0.000000000000000 || tmp.y < 0.000000000000000 || (tmp.type != 'R' && tmp.type != 'r'))
			return (write(1, "Error: Operation file corrupted\n", 32), 1);
		if ((pxplace = getPixelPlace(area, tmp.x, tmp.y)) >= 0){
			float h = 0;
			while (h <= tmp.height){
				float w = 0;
				while (w <= tmp.width){
					if (isInRectangle(tmp.type == 'r', w+tmp.x, h+tmp.y, tmp))
						area->pixels[getPixelPlace(area, w+tmp.x, h+tmp.y)].color = tmp.color;
					w++;
				}
				h++;
			}
		}
		params = fscanf(file, "%c %f %f %f %f %c\n", &tmp.type, &tmp.x, &tmp.y, &tmp.width, &tmp.height, &tmp.color);
	}
	if (params == -1)
		return (writeArea(area), 0);
	write(1, "Error: Operation file corrupted\n", 32);
	return (1);
}

int initBackGround(FILE *file)
{
	t_pixel	firstpixel;
	t_area	area;
	int		i = 0;
	int params = fscanf(file, "%f %f %c\n", &firstpixel.width, &firstpixel.height, &firstpixel.color);
	t_pixel	tmp;

	if (params != 3)
		return (1);
	if (firstpixel.width < 0.000000000000000 || firstpixel.height < 0.000000000000000)
		return (write(1, "Error: Operation file corrupted\n", 32), 1);
	area.pixels = malloc(((firstpixel.width * firstpixel.height)) * sizeof(t_area));
	area.size = firstpixel.width * firstpixel.height;
	area.maxheight = firstpixel.height;
	area.maxwidth = firstpixel.width;
	
	int x = 0;
	int y = 0;
	while (i < (firstpixel.width * firstpixel.height))
	{
		tmp = firstpixel;
		tmp.x = x;
		tmp.y = y;
		area.pixels[i] = tmp;
		x++;
		if (x == firstpixel.width){
			x = 0;
			y++;
		}
		i++;
	}
	if (readFile(file, &area) == 1)
		return(free(area.pixels), 1);
	return (free(area.pixels), 0);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (error("Error: argument\n"), 1);
	FILE *file = fopen(argv[1], "r");
	if (file == NULL)
		return (error("Error: Operation file corrupted\n"), 1);
	if (initBackGround(file) == 1)
		return (1);
	return (0);
}