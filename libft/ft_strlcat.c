/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuamba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 12:21:07 by mmuamba           #+#    #+#             */
/*   Updated: 2018/06/02 14:38:43 by mmuamba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t slen;
	size_t dlen;
	size_t i;

	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	i = dlen;
	while (dstsize > (dlen + 1))
		dst[dlen++] = *src++;
	dst[dlen] = '\0';
	if (i < dstsize)
		return (i + slen);
	else
		return (slen + dstsize);
}
