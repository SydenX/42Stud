/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:58:41 by jtollena          #+#    #+#             */
/*   Updated: 2023/10/09 13:08:48 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	return (nb * ft_iterative_factorial(nb - 1));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_recursive_factorial(5));
	return (0);
}
*/
