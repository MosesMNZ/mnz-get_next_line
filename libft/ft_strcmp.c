/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuamba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 14:10:20 by mmuamba           #+#    #+#             */
/*   Updated: 2018/06/05 11:22:48 by mmuamba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	*x;
	unsigned char	*y;

	i = 0;
	x = (unsigned char *)s1;
	y = (unsigned char *)s2;
	while (x[i] && y[i] && (x[i] == y[i]))
		i++;
	return (x[i] - y[i]);
}
