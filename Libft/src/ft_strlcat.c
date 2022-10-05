#include "../include/libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	sd;
	size_t 	ss;

	i = 0;
	j = 0;
	ss = ft_strlen(src);
	sd = ft_strlen(dest);
	i = sd;
	if (n < sd)
		return(n + ss);
	while (i < n - 1 && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (sd + ss);
}
