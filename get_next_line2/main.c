/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misler <misler@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 23:26:51 by misler            #+#    #+#             */
/*   Updated: 2022/11/24 17:57:07 by misler           ###   ########.fr       */
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
	printf ("Okunacak satır sayısını gir.\t");
	scanf("%d", &j);
	fd = open("test.txt", O_RDONLY);
	while (i < j)
	{
		printf("%s", get_next_line(fd));
		i++;
	}
	return (0);
}
