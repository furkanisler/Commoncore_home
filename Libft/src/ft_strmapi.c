#include "../include/libft.h"

char	*ft_strmapi(char const*s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char	*d;

	i = 0;
	d = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if  (s == 0 || f == 0)
		return (NULL);
	if (!d)
		return (0);
	while(s[i] != '\0')
	{
		d[i] = f(i,s[i]);
		i++;
	}
	d[i] = '\0';
	return (d);
}
