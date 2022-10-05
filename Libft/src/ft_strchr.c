#include "../include/libft.h"

char	*ft_strchr(const char *s, int c)
{
/*
	while (*s)
	{
		if(c == *s)
			return (unsigned char *)s;
		*s++;
	}
*/

	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (c == s[i])
			return((char *)&s[i]);  
//şu tip dönüşümünü yapmak için çok uğraştım. Böyle oluyormus. Usteki zaten dogru.
		i++;
	}

	return (NULL);
}
