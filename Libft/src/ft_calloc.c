#include "../include/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*d;

	d = (char *)malloc(size * nmemb);
	while (nmemb > 0)
	{
		*d = '\0';
		d++;
		nmemb--;
	}
	return(d);
}
