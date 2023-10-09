/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtollena <jtollena@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:39:28 by jtollena          #+#    #+#             */
/*   Updated: 2023/10/09 15:18:07 by jtollena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	ln;

	ln = 0;
	while (str[ln] != 0)
		ln++;
	return (ln);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;

	copy = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (src[i] != 0)
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = 0;
	return (copy);
}
