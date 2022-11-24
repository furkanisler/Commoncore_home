/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_decimal_format.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misler <misler@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 07:34:53 by misler            #+#    #+#             */
/*   Updated: 2022/11/23 07:35:54 by misler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/**
 * tüm sayılar pozitif olacak
 */

int	ft_unsigned_decimal_format(unsigned int value)
{
	int		i;
	char	*str;

	str = ft_itoa_base(value, "0123456789");
	i = ft_string_format(str);
	free(str);
	return (i);
}
