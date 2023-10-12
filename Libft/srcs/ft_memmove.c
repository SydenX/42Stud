
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*srccpy;
	unsigned char		*copy;
	int					i;


	if (dst > src){
		while (len > 0)
		{
			copy[len - 1] = srccpy[len - 1];
			len--;
		}
	}
	else
	{
		while (i < len - 1)
		{
			copy[i] = srccpy[i];
			i++;
		}
		
	}
	return (dst);
}

#include <stdio.h>
int	main(int argc, char *argv[])
{
	printf("%s", ft_memmove(argv[1], argv[2], 4));
	return (argc);
}
