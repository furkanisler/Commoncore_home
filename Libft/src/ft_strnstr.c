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

#include "../include/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	n;
	int		i;
	int		j;

	n = len;
	i = 0;
	j = 0;
	while (big[i] != '\0' && little[j] != '\0' && n > 0)
	{
		if (big[i++] != little[j])
		{
			j = 0;
			n = len;
		}
		else if (big[i++] == little[j++])
		{
			n--;
		}
	}
	if (n == 0 || little[j] == '\0')
		return ((char *)&big[i - j]);
	else
		return (NULL);
}
