

#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*copy;

	copy = s;
	while (n > 0)
	{
		*copy = 0;
		copy++;
		n--;
	}
}
