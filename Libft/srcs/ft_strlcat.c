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

int	ft_strlen(const char *src)
{
	int	ln;

	ln = 0;
	while (src[ln] != 0)
		ln++;
	return (ln);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	i;
	int	dstln;

	dstln = ft_strlen(dst);
	i = 0;
	while (i < (int)dstsize - dstln - 1 && src[i] != 0)
	{
		dst[dstln + i] = src[i];
		i++;
	}
	if (i > 0)
		dst[dstln + i] = 0;
	
	return (dstln + ft_strlen(src));
}

#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	char *dst = malloc(6);
	dst[0] = 121;
	dst[1] = 122;
	printf("%zu\n", ft_strlcat(dst, argv[1], 6));
	printf("%s", dst);
	return (argc);
}
