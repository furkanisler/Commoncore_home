/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_parser.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misler <misler@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 02:00:55 by misler            #+#    #+#             */
/*   Updated: 2022/11/23 07:03:36 by misler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_input_parser(const char *str, va_list args)
{
	int	pos;
	int	i;

	pos = 0;
	i = 0;
	while (str[pos])
	{
		if (str[pos] != '%')
			i = i + ft_putchar_fd(str[pos], 1);
		else if ((str[pos] == '%') && str[pos + 1])
		{
			pos++;
			if (ft_is_argument(str[pos]))
				i = i + ft_formats(str[pos], args);
			else if (str[pos, 1])
				i = i + ft_putchar_fd(str[pos], 1);
		}
		pos++;
	}
	return (i);
}
