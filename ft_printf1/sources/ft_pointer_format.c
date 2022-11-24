/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misler <misler@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 07:19:42 by misler            #+#    #+#             */
/*   Updated: 2022/11/23 07:27:32 by misler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/**
 * Pointer için lazım olan öneki çıktı alıyoruz.
 */
static int	ft_print_prefix(char *str)
{
	int	i;

	i = ft_string_format(str);
	return (i);
}

/**
 * adresi onaltılık olarak verir. 
 * Adresin önüne 0x eklenir. 
 * Dize, parametre olarak bir taban alan ft_itoa_base
 *  kullanılarak onaltılık bir biçime dönüştürülür.
 */

int	ft_pointer_format(void *ptr_address)
{
	int				i;
	char			*str;
	unsigned long	address;

	address = (unsigned long)ptr_address;
	i = ft_print_prefix("0x");
	str = ft_itoa_base(address, "0123456789abcdef");
	i = i + ft_string_format(str);
	free(str);
	return (i);
}
