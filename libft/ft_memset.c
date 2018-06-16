/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuamba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 12:57:39 by mmuamba           #+#    #+#             */
/*   Updated: 2018/05/30 13:30:11 by mmuamba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *i;

	i = (unsigned char *)b;
	while (len > 0)
	{
		*i = (unsigned char)c;
		i++;
		len--;
	}
	return (b);
}
