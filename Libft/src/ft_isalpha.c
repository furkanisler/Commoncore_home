#include "../include/libft.h"

int	ft_isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'A' && c >= 'Z'))
		return (1);
	return (0);
}

