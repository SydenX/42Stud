/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:42:25 by jtollena          #+#    #+#             */
/*   Updated: 2023/10/09 14:52:36 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_getsize(int min, int max)
{
	int	ln;

	ln = 0;
	while (min < max)
	{
		ln++;
		min++;
	}
	return (ln);
}

int	*ft_range(int min, int max)
{
	int	*list;
	int	i;

	if (min >= max)
		return (NULL);
	list = malloc(ft_getsize(min, max) * sizeof(int));
	if (list == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		list[i] = min;
		min++;
		i++;
	}
	return (list);
}
/*
#include <stdio.h>
int	main(void)
{
	int	i = 0;
	while (i < 10)
	{
		printf("%d", ft_range(0, 9)[i]);
		i++;
	}
	return (0);
}*/
