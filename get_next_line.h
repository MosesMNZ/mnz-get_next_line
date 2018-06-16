/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuamba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/15 08:33:05 by mmuamba           #+#    #+#             */
/*   Updated: 2018/06/16 09:25:11 by mmuamba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include "libft.h"

# define BUFF_SIZE 8

int		newline(char **stored_buff, char **line);
int		get_next_line(const int fd, char **line);
char	*strings_joining(char *s1, char *s2);

#endif
