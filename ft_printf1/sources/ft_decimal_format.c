/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misler <misler@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 07:29:01 by misler            #+#    #+#             */
/*   Updated: 2022/11/23 07:32:48 by misler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/ft_printf.h"

/**
 * Sayının negatif olma durumuna bakarız
 * En küçük minimum int değerini ayrı olarak ele aldık
 */

static int	ft_is_negative(int *value)
{
	int	i;

	i = 0;
	if (*value == INT_MIN)
	{
		i = 1;
		ft_putchar_fd('-', 1);
		ft_putchar_fd('2', 1);
		*value = 147483648;
		i++;
	}
	else if (*value < 0)
	{
		ft_putchar_fd('-', 1);
		*value *= -1;
		i++;
	}
	return (i);
}

/**
 * 10luk tabanda sayıları yazdık
 */

int	ft_decimal_format(int value)
{
	int		i;
	char	*str;

	i = ft_is_negative(&value);
	str = ft_itoa_base(value, "0123456789");
	i = i + ft_string_format(str);
	free(str);
	return (i);
}
