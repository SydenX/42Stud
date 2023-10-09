/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:09:06 by jtollena          #+#    #+#             */
/*   Updated: 2023/10/09 15:17:51 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 0;
	while (sqrt * sqrt != nb)
	{
		if (sqrt * sqrt > nb)
			return (0);
		sqrt++;
	}
	return (sqrt);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_sqrt(49));
	return (0);
}
*/
