/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:08:33 by jtollena          #+#    #+#             */
/*   Updated: 2023/10/09 15:16:33 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f) (char*))
{
	int	i;
	int	ln;

	ln = 0;
	i = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			ln++;
		i++;
	}
	return (ln);
}
/*
#include <stdio.h>
int	has_space(char *str)
{
	int	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == ' ')
			return (1);
		i++;
	}
	return 0;
}

int	main(int argc, char *argv[])
{
	printf("%d", ft_count_if(argv, &has_space));
	return 0;
}
*/
