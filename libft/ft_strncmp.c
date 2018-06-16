/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuamba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 14:35:57 by mmuamba           #+#    #+#             */
/*   Updated: 2018/06/05 10:33:40 by mmuamba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*x;
	unsigned char	*y;

	i = 0;
	x = (unsigned char *)s1;
	y = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (x[i] != '\0' && y[i] != '\0' && (x[i] == y[i]) && (i < n - 1))
		i++;
	return (x[i] - y[i]);
}
