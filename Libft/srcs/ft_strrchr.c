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

char	*ft_strrchr(const char *s, int c)
{
	int		last;
	char	*copy;
	int		i;

	i = 0;
	last = -1;
	copy = (char *) s;
	while (copy[i] != 0){
		if (copy[i] == c)
			last = i;
		i++;
	}
	if (copy[i] == c)
		last = i;
	if (last == -1)
		return (NULL);
	return (&copy[last]);
}

#include <stdio.h>
int	main(int argc, char *argv[])
{
	printf("%s", ft_strrchr(argv[1], argv[2][0]));
	return (argc);
}
