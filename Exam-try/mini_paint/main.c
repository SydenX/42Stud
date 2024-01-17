/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:32:58 by jtollena          #+#    #+#             */
/*   Updated: 2024/01/17 11:57:53 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

int	error(char *str)
{
	while (*str)
	{
		write(STDOUT_FILENO, str, 1);
		str++;
	}
	return (1);
}

int	print_board(t_board	*board){
	int	i = 0;
	while (i < board->width * board->height)
	{
		printf("%c", board->pixels[i].color);
		if (board->pixels[i].x >= board->width - 1)
			printf("\n");
		i++;
	}
	return (0);
}

int	setup_baord(FILE *fd, t_board *board)
{
	if(fscanf(fd, "%d %d %c\n", &board->width, &board->height, &board->color) == 3)
	{
		if (board->width < 1 || board->width > 300)
			return (1);
		if (board->height < 1 || board->height > 300)
			return (1);
		board->pixels = malloc((board->height * board->width) * sizeof(t_pixel));
		int i = 0;
		int	x = 0;
		int y = 0;
		while (i < (board->width * board->height))
		{
			board->pixels[i].color = board->color;
			board->pixels[i].x = x;
			board->pixels[i].y = y;
			if (x++ == board->width - 1){
				x = 0;
				y++;
			}
			i++;
		}
		return (0);
	}
	return (1);
}

int reduce_float(float i){
	return ((int) i);
}

double fabs(double i)
{
	if (i < 0.00000000)
		return (-i);
	return (i);
}

int	is_in_circle(float x, float y, t_circle circle, char type){
	float distance = sqrt((reduce_float(x) - circle.x) * (reduce_float(x) - circle.x) + (reduce_float(y) - circle.y) * (reduce_float(y) - circle.y));
	if (distance <= circle.radius){
		if (type == 'C')
			return (1);
		if (type == 'c'){
			if (fabs(distance - circle.radius) >= 1.00000000)
				return (0);
			else
				return (1);
		}
	}
	return (0);
}

int readfile(FILE *fd, t_board *board)
{
	int	scanres;
	t_circle circle;
	if (setup_baord(fd, board) == 1)
		return (error("Error: Operation file corrupted\n"));
	while ((scanres = fscanf(fd, "%c %f %f %f %c\n", &circle.type, &circle.x, &circle.y, &circle.radius, &circle.color)) == 5)
	{
		if (circle.type != 'c' && circle.type != 'C')
			return (error("Error: Operation file corrupted\n"));
		if (circle.radius <= 0.0000000000)
			return (error("Error: Operation file corrupted\n"));
		int i = 0;
		while (i < board->width * board->height){
			if (is_in_circle(board->pixels[i].x, board->pixels[i].y, circle, circle.type) == 1){
				board->pixels[i].color = circle.color;
			}
			i++;
		}
	}
	if (scanres != -1)
		return (error("Error: Operation file corrupted\n"));
	print_board(board);
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		FILE	*fd = fopen(argv[1], "r");
		t_board	board;
		if (fd == NULL)
			return (error("Error: Operation file corrupted\n"));
		return (readfile(fd, &board));
	}
	else
		return (error("Error: argument\n"));
	return (0);
}