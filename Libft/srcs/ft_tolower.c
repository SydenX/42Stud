

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

#include <stdio.h>
int	main(int argc, char *argv[])
{
	printf("%d", ft_tolower(argv[1][0]));
	return (argc);
}
