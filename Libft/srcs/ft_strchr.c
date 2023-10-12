/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:52:49 by jtollena          #+#    #+#             */
/*   Updated: 2023/10/12 12:59:50 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*copy;

	i = 0;
	copy = (char *) s;
	while (*copy != c && *copy != 0)
		copy++;
	if (*copy != c)
		return (NULL);
	return (copy);
}

#include <stdio.h>
int	main(int argc, char *argv[])
{
	printf("%s", ft_strchr(argv[1], argv[2][0]));
	return (argc);
}
