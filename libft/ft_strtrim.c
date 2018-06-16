/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuamba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 11:45:14 by mmuamba           #+#    #+#             */
/*   Updated: 2018/06/05 10:43:04 by mmuamba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*fresh;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	j = ft_strlen((char *)(s)) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		i++;
	}
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j--;
	if ((j - i) <= 0)
		return (ft_strdup(""));
	if (!(fresh = (char *)malloc(sizeof(char) * ((j - i) + 2))))
		return (NULL);
	while (i <= j)
		fresh[k++] = s[i++];
	fresh[k] = '\0';
	return (fresh);
}
