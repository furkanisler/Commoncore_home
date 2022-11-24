/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misler <misler@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 23:00:19 by misler            #+#    #+#             */
/*   Updated: 2022/10/08 23:05:55 by misler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*substring;
	unsigned int		i;

	if (s == NULL)
		return (NULL);
	i = 0;
	substring = (char *)malloc(sizeof(char) * (len + 1));
	if (! substring)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		substring[i] = '\0';
		return (substring);
	}
	while (len > 0)
	{
		substring[i] = s[start];
		i++;
		start++;
		len--;
	}
	substring[i] = '\0';
	return (substring);
}
