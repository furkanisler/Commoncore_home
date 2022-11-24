/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misler <misler@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 07:11:37 by misler            #+#    #+#             */
/*   Updated: 2022/11/23 07:12:20 by misler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/**
 * Tek karakter çıktı verir
 */

int	ft_char_format(char c)
{
	int	i;

	i = 0;
	ft_putchar_fd(c, 1);
	return (i + 1);
}
