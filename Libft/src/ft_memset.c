#include "../include/libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*bla;
	bla = s;

	while (n > 0)
	{
		*bla = c;
		bla++;
		n--;
	}
	return (s);
}
