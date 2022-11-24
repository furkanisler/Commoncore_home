/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_percent_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misler <misler@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 22:00:22 by elraira-          #+#    #+#             */
/*   Updated: 2022/11/23 07:45:11 by misler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/**
 * Bir tane % çktısı alıyoruz.
 */
int	ft_percent_format(char c)
{
	int	i;

	i = 0;
	ft_putchar_fd(c, 1);
	return (i + 1);
}
