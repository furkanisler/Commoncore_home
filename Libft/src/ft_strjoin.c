/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misler <misler@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 23:06:27 by misler            #+#    #+#             */
/*   Updated: 2022/10/08 23:19:31 by misler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		m;
	int		n;
	char	*dest;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	m = 0;
	n = 0;
	dest = (char *)malloc(sizeof(char) * (i + j + 1));
	if (!dest)
		return (NULL);
	while (n < i)
	{
		dest[n] = s1[n];
		n++;
	}
	while (n < i + j)
	{
		dest[n++] = s2[m++];
	}
	dest[n] = '\0';
	return (dest);
}
