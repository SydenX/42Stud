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

int	ft_strlen(const char *s)
{
	int	ln;

	ln = 0;
	while (s[ln] != 0)
		ln++;
	return (ln);
}

#include <stdio.h>
int	main(int argc, char *argv[])
{
	printf("%d", ft_strlen(argv[1]));
	return (argc);
}
