/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:05:18 by jtollena          #+#    #+#             */
/*   Updated: 2023/10/09 15:17:40 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	facto;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	facto = 1;
	while (nb > 1)
	{
		facto *= nb;
		nb--;
	}
	return (facto);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_factorial(10));
	return (0);
}
*/
