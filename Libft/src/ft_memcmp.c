#include "../include/libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*p1;
	char	*p2;

	p1 = (char *)s1;
	p2 = (char *)s2;
	if (n == 0)
		return (0);
	while (*p1 && *p2 && n > 0 && *p1 == *p2)
	{
		p1++;
		p2++;
		n--;
	}
	return (*p1 - *p2);
}
