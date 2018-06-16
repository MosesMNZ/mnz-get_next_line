/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuamba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 11:56:55 by mmuamba           #+#    #+#             */
/*   Updated: 2018/05/31 12:16:16 by mmuamba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *x;

	x = (unsigned char *)s;
	while (n > 0)
	{
		if (*x == (unsigned char)c)
			return (x);
		x++;
		n--;
	}
	return (NULL);
}
