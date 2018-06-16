/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuamba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 11:02:44 by mmuamba           #+#    #+#             */
/*   Updated: 2018/06/15 09:53:07 by mmuamba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*sub;

	i = 0;
	if (s)
	{
		if (!(sub = (char *)malloc(len + 1)))
			return (NULL);
		while (s[i] && (len > 0))
		{
			sub[i++] = s[start++];
			len--;
		}
		sub[i] = '\0';
		return (sub);
	}
	return (NULL);
}
