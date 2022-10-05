#include "../include/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	int	i;

	i = 0;
	substring = (char *)malloc(sizeof(char) * (len + 1));

	if ( ! substring)
		return (NULL);
	while(len > 0)
	{
		substring[i] = s[start];
		i++;
		start++;
		len--;
	}
	substring[i] = '\0';
	return (substring);
}
