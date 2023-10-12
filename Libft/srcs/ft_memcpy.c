
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*srccpy;
	unsigned char	*copy;

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
