/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misler <misler@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:55:57 by misler            #+#    #+#             */
/*   Updated: 2022/10/08 22:56:23 by misler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_atoi(const char *nptr)
{
	int	n;
	int	a;

	n = 1;
	a = 0;
	while (*nptr == 32 || (*nptr <= 13 && *nptr >= 9))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			n = -1;
		nptr++;
	}
	while (*nptr <= '9' && *nptr >= '0')
	{
		a = (*nptr - '0') + 10 * a;
		nptr++;
	}
	return (a * n);
}
