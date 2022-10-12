/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misler <misler@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 02:16:50 by misler            #+#    #+#             */
/*   Updated: 2022/10/13 02:17:16 by misler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*cont;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	cont = ft_lstlast(*lst);
	cont->next = new;
}
