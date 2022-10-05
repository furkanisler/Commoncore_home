#include "../include/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
//	char	*s;
//	char 	*t;
	int	i;

//	s = dest;
//	t = src;
	i = 0;
	while (n > 0)
	{
		*((char *)(dest + i)) = *((char *)(src + i));
		i++;
		n--;
	}
	return (dest);
}
