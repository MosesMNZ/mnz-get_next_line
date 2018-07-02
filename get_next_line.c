/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuamba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 14:54:07 by mmuamba           #+#    #+#             */
/*   Updated: 2018/06/23 13:07:21 by mmuamba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	int			nb_bytes;
	char		buff[BUFF_SIZE + 1];
	static char	*stored_buff = NULL;

	if (stored_buff && newline(&stored_buff, line))
		return (1);
	while ((nb_bytes = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[nb_bytes] = '\0';
		stored_buff = strings_joining(stored_buff, buff);
		if (newline(&stored_buff, line))
			return (1);
	}
	if (nb_bytes < 0)
		return (-1);
	if (stored_buff && *stored_buff)
	{
		*line = ft_strdup(stored_buff);
		ft_strdel(&stored_buff);
		return (1);
	}
	if (nb_bytes)
		return (1);
	return (0);
}

int		newline(char **stored_buff, char **line)
{
	char		*nl;

	if ((nl = ft_strchr(*stored_buff, '\n')))
	{
		*line = ft_strsub(*stored_buff, 0, nl - *stored_buff);
		ft_strcpy(*stored_buff, nl + 1);
		return (1);
	}
	return (0);
}

char	*strings_joining(char *stored_buff, char *buff)
{
	size_t	i;
	size_t	j;
	char	*strings;

	i = (stored_buff) ? ft_strlen(stored_buff) : 0;
	j = ft_strlen(buff);
	strings = ft_strnew(i + j);
	if (strings)
	{
		if (stored_buff)
			ft_memcpy(strings, stored_buff, i);
		ft_memcpy(strings + i, buff, j);
	}
	if (stored_buff)
		ft_strdel(&stored_buff);
	return (strings);
}
