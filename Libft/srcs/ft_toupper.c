

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

#include <stdio.h>
int	main(int argc, char *argv[])
{
	printf("%d", ft_toupper(argv[1][0]));
	return (argc);
}
