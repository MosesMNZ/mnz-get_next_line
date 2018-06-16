/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuamba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 11:35:50 by mmuamba           #+#    #+#             */
/*   Updated: 2018/06/05 10:55:38 by mmuamba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		k;
	char	*fresh;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	k = ft_strlen(s1) + ft_strlen(s2);
	if (!(fresh = (char *)malloc(k + 1)))
		return (NULL);
	while (*s1)
		fresh[i++] = *s1++;
	while (*s2)
		fresh[i++] = *s2++;
	fresh[i] = '\0';
	return (fresh);
}
