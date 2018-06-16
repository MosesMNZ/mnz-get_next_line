/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuamba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 14:56:13 by mmuamba           #+#    #+#             */
/*   Updated: 2018/06/05 09:56:02 by mmuamba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *s1;
	unsigned char *s2;

	s1 = (unsigned char *)src;
	s2 = (unsigned char *)dst;
	while (n > 0)
	{
		*s2++ = *s1++;
		n--;
	}
	return (dst);
}
