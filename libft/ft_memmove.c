/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuamba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 16:06:21 by mmuamba           #+#    #+#             */
/*   Updated: 2018/06/15 17:30:50 by mmuamba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *x;
	unsigned char *y;

	x = (unsigned char *)src;
	y = (unsigned char *)dst;
	if (x > y)
		return (ft_memcpy(dst, src, len));
	if (x < y)
	{
		while (len)
		{
			y[len - 1] = x[len - 1];
			len--;
		}
	}
	return (dst);
}
