/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:05:39 by jtollena          #+#    #+#             */
/*   Updated: 2023/10/09 15:18:24 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
#include <stdio.h>
void	ft_putnbr(int i)
{
	printf("%d", i);
}

int main(void)
{
	int	tab[3] = {0, 1, 2};
	ft_foreach(tab, 3, &ft_putnbr);
	return (0);
}
*/
