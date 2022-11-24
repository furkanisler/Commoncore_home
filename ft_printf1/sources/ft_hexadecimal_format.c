/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal_format.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misler <misler@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 07:38:15 by misler            #+#    #+#             */
/*   Updated: 2022/11/23 07:50:28 by misler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/**
 * @brief itoa kullanarak gelen sayıyı 16lık tabanda çıktı aldık
 * küçük harf kullandık
 */

int	ft_hexadecimal_format(unsigned int value)
{
	int		i;
	char	*str;

	str = ft_itoa_base(value, "0123456789abcdef");
	i = ft_string_format(str);
	free(str);
	return (i);
}
