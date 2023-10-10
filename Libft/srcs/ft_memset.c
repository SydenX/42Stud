/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:58:41 by jtollena          #+#    #+#             */
/*   Updated: 2023/10/10 10:14:14 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, size_t len)
{
	int		i;
	void	*copy;

	copy = b;
	i = 0;
	while (i < len)
	{
		*copy = c;
		i++;
	}
	return (copy);
}

#include <stdio.h>
int	main(int argc, char *argv[])
{
	printf("%s", ft_memset(argv[1]));
	return (argc);
}
