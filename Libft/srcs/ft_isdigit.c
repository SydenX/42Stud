

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

#include <stdio.h>
int	main(int argc, char *argv[])
{
	printf("%d", ft_isdigit(argv[1][0]));
	return (argc);
}
