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

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*srccpy;
	unsigned char	*copy;

	copy = dst;
	srccpy = src;
	while (len > 0)
	{
		*copy = *srccpy;
		srccpy++;
		copy++;
		len--;
	}
	return (dst);
}

#include <stdio.h>
int	main(int argc, char *argv[])
{
	printf("%s", ft_memmove(argv[1], argv[2], 4));
	return (argc);
}
