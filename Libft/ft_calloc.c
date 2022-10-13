/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misler <misler@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:57:14 by misler            #+#    #+#             */
/*   Updated: 2022/10/08 22:58:42 by misler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*d;

	d = (char *)malloc(size * nmemb);
	while (nmemb > 0)
	{
		*d = '\0';
		d++;
		nmemb--;
	}
	return (d);
}
