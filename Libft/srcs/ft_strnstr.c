
#include <../includes/libft.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	int	i;

	i = 0;
	while (i < (int) n && haystack[i] != 0)
	{
		if (haystack[i] == needle[i])
			ft_find();
		i++;
	}
}

#include <stdio.h>
int	main(int argc, char *argv[])
{
	printf("%d", ft_memcmp(argv[1], argv[2], 5));
	return (argc);
}