
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		i;
	unsigned char	*copys1;
	unsigned char	*copys2;
	
	i = 0;
	copys1 = (unsigned char *) s1;
	copys2 = (unsigned char *) s2;
	while (i < (int)n - 1)
	{
		if (copys1[i] != copys2[i])
			return (copys1[i] - copys2[i]);
		i++;
	}
	return (copys1[i] - copys2[i]);
}

#include <stdio.h>
int	main(int argc, char *argv[])
{
	printf("%d", ft_memcmp(argv[1], argv[2], 5));
	return (argc);
}