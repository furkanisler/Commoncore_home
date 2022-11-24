/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formats.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misler <misler@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:54:12 by misler            #+#    #+#             */
/*   Updated: 2022/11/22 01:15:31 by misler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_formats(int c, va_list args)
{
	int	i;

	i = 0;
	if (c == 'c')
		i = ft_char_format(va_arg(args, int));
	else if (c == 's')
		i = ft_string_format(va_arg(args, char *));
	else if (c == 'p')
		i = ft_pointer_format(va_arg(args, void *));
	else if (c == 'i' || c == 'd')
		i = ft_decimal_format(va_arg(args, int));
	else if (c == 'u')
		i = ft_unsigned_decimal_format(va_arg(args, unsigned long));
	else if (c == 'x')
		i = ft_hexadecimal_format (va_arg(args, unsigned long));
	else if (c == 'X')
		i = ft_upper_case_hexadecimal_format(va_arg(args, unsigned long));
	else if (c == '%')
		i = ft_percent_format(c);
	return (i);
}
