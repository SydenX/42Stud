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

int	print_board(t_board *board)
{
	int	i = 0;
	while (i < board->height * board->width)
	{
		write(1, &board->pixels[i].color, 1);
		if (board->pixels[i].x == board->width - 1)
			write(1, "\n", 1);
		i++;
	}
	return (0);
}

int	setup_board(t_board *board, FILE *fd)
{
	int	i = 0;
	int x = 0;
	int y = 0;

	if (fscanf(fd, "%d %d %c\n", &board->width, &board->height, &board->color) == 3)
	{
		if (board->width <= 0 || board->width > 300)
			return (1);
		if (board->width <= 0 || board->width > 300)
			return (1);
		board->pixels = malloc(sizeof(t_pixel) * (board->height * board->width));
		while (i < board->height * board->width)
		{
			board->pixels[i].color = board->color;
			board->pixels[i].x = x;
			board->pixels[i++].y = y;
			if (x++ == board->width - 1)
			{
				x = 0;
				y++;
			}
		}
		return (0);
	}
	return (1);
}

int	is_in(t_board *board, t_rect rect)
{
	
	return (0);
}

int	setup_rectangle(t_board *board, FILE *fd)
{
	int	scanres;
	int	i = 0;
	t_rect rect;

	while ((scanres = fscanf(fd, "%c %f %f %f %f %c\n", &rect.type, &rect.x, &rect.y, &rect.width, &rect.height, &rect.color)) == 6)
	{
		if (rect.type != 'r' && rect.type != 'R')
			return (1);
		if (rect.width <= 0.00000000 || rect.height <= 0.00000000)
			return (1);
		i = 0;
		while (i < board->height * board->width)
		{
			if (is_in(board, rect) == 1)
				board->pixels[i].color = rect.color;
			i++;
		}
	}
	if (scanres != -1)
		return (1);
	print_board(board);
	return (0);
}

int	main(int argc, char *argv[])
{
	FILE 	*fd;
	t_board	board;
	if (argc != 2)
		return (error("Error: argument\n"));
	fd = fopen(argv[1], "r");
	if (fd == NULL)
		return (error("Error: Operation file corrupted\n"));
	if(setup_board(&board, fd) == 1)
		return (error("Error: Operation file corrupted\n"));
	if(setup_rectangle(&board, fd) == 1)
		return (error("Error: Operation file corrupted\n"));
	return (0);
}