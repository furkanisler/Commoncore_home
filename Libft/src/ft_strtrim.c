#include "../include/libft.h"

int	ft_ce(char c, char const *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if(c == s[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*temp;
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	temp = ft_strdup(s1);
	if(!temp)
		return (NULL);
	while (ft_ce(temp[0], set) == 1)
	{
		k = i;
		while(temp[k + 1] != '\0')
		{
			temp[k] = temp[k + 1];
			k++;
		}
		temp[k] = '\0';
	}
	j = ft_strlen(temp);
	j--;
	while (ft_ce(temp[j], set) == 1)
	{
		temp[j] = '\0';
		j--;
	}
	return (temp);
}
