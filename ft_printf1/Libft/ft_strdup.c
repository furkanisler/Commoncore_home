/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misler <misler@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:59:14 by misler            #+#    #+#             */
/*   Updated: 2022/10/16 14:57:26 by misler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*t;

	if (!s)
		return (NULL);
	j = 0;
	i = ft_strlen(s);
	t = (char *)malloc(sizeof(char) * (i +1));
	if (!t)
		return (0);
	while (s[j] != '\0')
	{
		t[j] = s[j];
		j++;
	}
	t[j] = '\0';
	return (t);
}
