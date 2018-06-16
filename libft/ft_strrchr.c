/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuamba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 13:33:01 by mmuamba           #+#    #+#             */
/*   Updated: 2018/05/26 14:27:18 by mmuamba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*a;

	i = 0;
	a = NULL;
	while (s[i])
	{
		if (s[i] == c)
			a = s + i;
		i++;
	}
	if (s[i] == c)
		return ((char*)(s + i));
	return ((char*)a);
}
