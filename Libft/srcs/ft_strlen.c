

int	ft_strlen(const char *s)
{
	int	ln;

	ln = 0;
	while (s[ln] != 0)
		ln++;
	return (ln);
}

#include <stdio.h>
int	main(int argc, char *argv[])
{
	printf("%d", ft_strlen(argv[1]));
	return (argc);
}
