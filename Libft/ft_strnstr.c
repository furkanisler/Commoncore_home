/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misler <misler@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 21:32:55 by misler            #+#    #+#             */
/*   Updated: 2022/10/08 22:55:07 by misler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	a;
	size_t	b;

	if (!*little)
		return ((char *)big);
	a = 0;
	while (big[a] != '\0' && a < len)
	{
		if (big[a] == little[0])
		{
			b = 0;
			while (big[a + b] == little[b] && a + b < len)
			{
				if (little[b +1] == '\0')
					return ((char *)&big[a]);
				b++;
			}
		}
		a++;
	}
	return (NULL);
}
