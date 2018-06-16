/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuamba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 14:52:44 by mmuamba           #+#    #+#             */
/*   Updated: 2018/06/05 09:37:52 by mmuamba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *x;
	const unsigned char *y;

	x = (const unsigned char *)s1;
	y = (const unsigned char *)s2;
	while (n-- > 0)
	{
		if (*x != *y)
			return (*x - *y);
		x++;
		y++;
	}
	return (0);
}
