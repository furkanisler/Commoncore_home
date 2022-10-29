/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misler <misler@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 23:26:51 by misler            #+#    #+#             */
/*   Updated: 2022/10/30 00:56:13 by misler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <stdio.h>
#include <fcntl.h>

int	main()
{
	int	fd;
	int	i;
	int	j;

	i = 0;
	j = 2;
	fd = open("test.txt", O_RDONLY);
	while (i < j)
	{
		printf("%s", get_next_line(fd));
		i++;
	}
	return (0);
}
