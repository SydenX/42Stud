

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 127)
		return (1);
	return (0);
}

#include <stdio.h>
int	main(int argc, char *argv[])
{
	printf("%d", ft_isprint(argv[1][0]));
	return (argc);
}
