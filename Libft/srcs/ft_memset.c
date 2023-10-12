

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*copy;

	copy = b;
	while (len > 0)
	{
		*copy = c;
		copy++;
		len--;
	}
	return (b);
}

#include <stdio.h>
int	main(int argc, char *argv[])
{
	printf("%s", ft_memset(argv[1]+1, 'z', 2));
	return (argc);
}
