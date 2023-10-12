

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57)
		|| (c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122))
		return (1);
	return (0);
}

#include <stdio.h>
int	main(int argc, char *argv[])
{
	printf("%d", ft_isalnum(argv[1][0]));
	return (argc);
}
