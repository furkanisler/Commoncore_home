/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upper_case_hexaecimal_format.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misler <misler@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 22:00:22 by elraira-          #+#    #+#             */
/*   Updated: 2022/11/23 07:43:28 by misler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/**
 * @brief itoa kullanarak gelen sayıyı 16lık tabanda çıktı aldık
 * büyük harf kullandık
 */

int	ft_upper_case_hexadecimal_format(unsigned int value)
{
	int		i;
	char	*str;

	str = ft_itoa_base(value, "0123456789ABCDEF");
	i = ft_string_format(str);
	free(str);
	return (i);
}
