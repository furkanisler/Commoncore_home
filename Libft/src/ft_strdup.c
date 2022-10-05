#include "../include/libft.h"

char	*ft_strdup(const char *s)
{
	int	i;
	int	j;
	char	*t;

	j = 0;
	i = ft_strlen(s);
	t = (char *)malloc(sizeof(char) * i);

	while (s[j] != '\0')
	{
		t[j] = s[j];
		j++;
	}
	t[j] = '\0';
	return (t);
}
