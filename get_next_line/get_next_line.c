/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misler <misler@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 19:33:55 by misler            #+#    #+#             */
/*   Updated: 2022/10/28 23:06:30 by misler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t nelem, size_t elsize)
/*bildik calloc. İçi boş dizi oluşturduk*/
{
	char			*ptr;
	unsigned int	i;
	size_t			x;

	i = 0;
	x = nelem * elsize;
	ptr = (char *)malloc(x);
	if (ptr == NULL)
		return (0);
	while (i < x)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

char	*ft_update_nl(char **next_line, int position)
/* next_line dizisinden position kadar ilerisinden sonrasıyla yeni bir dizi oluşturur
** oluşturulan bu diziyi döndürür.*/
{
	char	*tmp;
	int		len;

	len = ft_strlen(*next_line) - position;
	tmp = ft_strndup(*next_line + position, len);
	ft_free(next_line);
	next_line = tmp;
	return (*next_line);
}

char	*ft_output(char **next_line, int position, int bytes)
/* İlk if bloğunda hata ayıklaması yaptık
**next line'ın her karakterini yeni satır veya null görene kadar hafızaya alduk.
**yeni satır görünce de geri kalan karakterleri de ft_update_nl ile yeniden hafızada tuttuk
*/
{
	char	*line;

	if (((bytes == 0 || bytes == -1) && !*next_line) || position == -5)
	{
		if (*next_line)
			return (*next_line);
		return (NULL);
	}
	line == NULL;
	if (position == -1)
		position = ft_strlen(*next_line);
	else
		position++;
	line = ft_strndup(*next_line, position);
	if (position == ft_strlen(*next_line))
		ft_free(next_line);
	else
		*next_line = ft_update_nl(next_line, position);
	return (line);
}

char	*get_next_line(int fd)

{
	static char	*next_line;
	char		*buff;
	int			position;
	int			bytes;

	if (BUFFER_SIZE <= 0 || fd < 0 || fd > 1024)
	{
		return (NULL);
	}
	buff = NULL;
	position = ft_strchr(next_line, '\n', 0);
	while (position == -1 && position != -5)
	{
		buff = ft_calloc(BUFFER_SIZE + 1, 1);
		if (buff == NULL)
			return (NULL);
		bytes = read(fd, buff, BUFFER_SIZE);
		if (bytes == -1 || bytes == 0)
			break ;
		next_line = ft_strnjoin(next_line, buff, bytes);
		position = ft_strchr(next_line, '\n', 1);
		ft_free(&buff);
	}
	ft_free(&buff);
	return (ft_output(&next_line, position, bytes));
}
