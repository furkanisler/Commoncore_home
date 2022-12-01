/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misler <misler@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 07:17:54 by misler            #+#    #+#             */
/*   Updated: 2022/12/01 15:49:43 by misler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/**
 * Stringin çıktısını alıyoruz
 */

int	ft_string_format(char *str)
{
	int	i;

	if (str == NULL)
		return (write(1, "(null)", 6));
	i = 0;
	while (str[i] != '\0')
		i = i + ft_putchar_fd(str[i], 1);
	return (i);
}
