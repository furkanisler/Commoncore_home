/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misler <misler@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 14:56:29 by tblaase           #+#    #+#             */
/*   Updated: 2022/10/30 01:14:57 by misler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

void	ft_free(char **p)
/* pointer var mı diye kontrol ettik, varsa null yaptık */
{
	if (!*p)
		return ;
	free(*p);
	*p = NULL;
}

int	ft_strlen(char *s)
/* dizi uzunluğuna bakarız */
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s && s[i])
	{
		i++;
	}
	return (i);
}

int	ft_strchr(char *s, int c, int flag)
/* verilen karakteri dizide arayıp indisini döndürüyoruz */
{
	int	i;

	if (flag == 1 && !s)
		return (-5);
	i = 0;
	while (s && s[i])
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_strnjoin(char *s1, char *s2, int n)
/* iki stringi birleştiriyoruz (n kadar) */
{
	char	*c;
	int		i;
	int		i2;

	i = 0;
	i2 = 0;
	if (s2[i2] == '\0')
		return (NULL);
	c = malloc(ft_strlen(s1) + n + 1);
	if (!c)
		return (NULL);
	if (s1 != NULL)
	{
		while (s1[i] != '\0')
		{
			c[i] = s1[i];
			i++;
		}
	}
	while (s2 && s2[i2] != '\0' && i2 < n)
		c[i++] = s2[i2++];
	c[i] = '\0';
	if (s1)
		ft_free(&s1);
	return (c);
}

char	*ft_strndup(char *input, int n)
/* verilen stringten n kadarının kopyasını alıyoruz */
{
	char	*output;
	int		len;
	int		i;

	i = 0;
	len = n;
	output = malloc(len + 1);
	if (!output)
		return (NULL);
	while (input && input[i] != '\0' && i < n)
	{
		output[i] = input[i];
		i++;
	}
	output[i] = '\0';
	return (output);
}