/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuamba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 11:50:12 by mmuamba           #+#    #+#             */
/*   Updated: 2018/06/05 11:16:53 by mmuamba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*fresh;

	i = 0;
	if (!s)
		return (NULL);
	if (!(fresh = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[i])
	{
		fresh[i] = (*f)(s[i]);
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}
