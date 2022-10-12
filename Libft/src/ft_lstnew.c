/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misler <misler@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 02:21:15 by misler            #+#    #+#             */
/*   Updated: 2022/10/13 01:48:25 by misler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/libft.h"

t_list	*ft_listnew(void *content)
{
	t_list	*new;
	size_t	len;

	new = NULL;
	new = (t_list *)malloc(sizeof(t_list));
	if (new)
	{
		if (content == NULL)
			new->content = NULL;
		else
		{
			len = ft_strlen(content);
			new->content = (void *)malloc(len + 1);
			if (new->content == NULL)
				return (0);
			ft_memcpy(new->content, content, len);
		}
		new->next = NULL;
	}
	return (new);
}
