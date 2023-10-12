
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	unsigned char	*copy;

	i = 0;
	copy = (unsigned char *) s;
	while (copy[i] != (unsigned char) c && i < (int)n - 1)
		i++;
	if (copy[i] != (unsigned char) c)
		return (NULL);
	return ((void *)&s[i]);
}

#include <stdio.h>
int	main(int argc, char *argv[])
{
	printf("%s", (unsigned char *) ft_memchr((const void *)argv[1], argv[2][0], 5));
	return (argc);
}
