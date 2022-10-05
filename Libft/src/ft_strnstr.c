#include "../include/libft.h"

char	*ft_strnstr(const char *big,  const char *little, size_t len)
{
	size_t	n;
	int	i;
	int	j;

	n = len;
	i = 0;
	j = 0;

	while (big[i] != '\0' && little[j] != '\0' && n > 0)
	{
		if (big[i] != little[j])
		{
			i++;
			j = 0;
			n = len;
		}
		else if (big[i] == little[j])
		{
			i++;
			j++;
			n--;
		}
	}
	if (n == 0 || little[j] == '\0')
		return ((char *)&big[i - j]);
	else
		return (NULL);
}
