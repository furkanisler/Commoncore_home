/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misler <misler@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 01:47:15 by misler            #+#    #+#             */
/*   Updated: 2022/11/24 02:14:48 by misler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printf(const char *fmt, ...)
{
	va_list		args;
	const char	*str;
	int			i;

	i = 0;
	str = ft_strdup(fmt);
	if (!str)
		return (0);
	va_start(args, fmt);
	i += ft_input_parser(str, args);
	va_end(args);
	free((void *)str);
	return (i);
}
