/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misler <misler@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 21:25:59 by misler            #+#    #+#             */
/*   Updated: 2022/10/08 21:26:46 by misler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	i;
	unsigned char	*p;

	i = c;
	p = (unsigned char *)s;
	while (*p && n > 0)
	{
		if (*p == i)
			return ((unsigned char *)p);
		p++;
		n--;
	}
	return (NULL);
}
