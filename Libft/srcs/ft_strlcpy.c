

#include <string.h>

int	ft_strlen(const char *src)
{
	int	ln;

	ln = 0;
	while (src[ln] != 0)
		ln++;
	return (ln);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	i;

	i = 0;
	while (i < (int)dstsize - 1 && src[i] != 0)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize != 0)
		dst[i] = 0;
	
	return (ft_strlen(src));
}

#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	char *dst = malloc(3);
	printf("%zu\n", ft_strlcpy(dst, argv[1], 3));
	printf("%s", dst);
	return (argc);
}
