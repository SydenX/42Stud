/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:22:55 by jtollena          #+#    #+#             */
/*   Updated: 2023/10/09 15:31:10 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_readfile(char *name)
{
	int		file;
	int		reader;
	char	str[1];

	file = open(name, O_RDONLY);
	if (file == -1)
		return (0);
	reader = read(file, str, 1);
	while (reader > 0)
	{
		ft_putstr(str);
		reader = read(file, str, 1);
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else if (ft_readfile(argv[1]) == 0)
		ft_putstr("Cannot read file.\n");
	return (0);
}
