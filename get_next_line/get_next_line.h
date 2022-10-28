/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misler <misler@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:25:51 by misler            #+#    #+#             */
/*   Updated: 2022/10/28 19:36:33 by misler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/*Burada derleme yaparken get buffer_size eklememize gerek kalmayacak.
**Çünkü buffer_size'ı tanımladım */
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdlib.h>

void	ft_free(char **p);
int		ft_strlen(char *s);
int		ft_strchr(char *s, int c, int flag);
char	*ft_strnjoin(char *s1, char *s2, int n);
char	*ft_strndup(char *str, int n);
void	*ft_calloc(size_t nelem, size_t elsize);
char	*ft_update_nl(char **next_line, int position);
char	*ft_output(char **next_line, int position, int bytes);
char	*get_next_line(int fd);

#endif
