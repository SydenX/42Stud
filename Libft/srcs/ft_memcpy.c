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

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int			i;
	const unsigned char	*srccpy;
	unsigned char	*copy;

	i = n;
	copy = dst;
	srccpy = src;
	while (n > 0)
	{
		*copy = *srccpy;
		srccpy++;
		copy++;
		n--;
	}
	return (dst);
}

#include <stdio.h>
int	main(int argc, char *argv[])
{
	printf("%s", ft_memcpy(argv[1], argv[2], 2));
	return (argc);
}
