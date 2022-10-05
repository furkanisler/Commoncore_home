#include "../include/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	/*
	size_t	i;

	i = 0;
	if(dest <= src)
		ft_memcpy(dest, src, n);
	else if(dest > src)
	{
		while (n > 0)
		{
			*((char *)(dest + n)) = *((char *)(src + n));
			n--;
		}
	}
	*/

	char	temp[n];
	char	*p_temp;
	unsigned int	i;

	p_temp = temp;
	i = 0;
	while (i < n)
	{
		*(p_temp + i) = *((char *)(src + i));
		i++;
	}
	i = 0;
	while (i < n)
	{
		*((char *)(dest + i)) = *(p_temp + i);
		i++;
	}
	return (dest);
}
