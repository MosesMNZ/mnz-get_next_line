/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuamba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 12:15:12 by mmuamba           #+#    #+#             */
/*   Updated: 2018/06/05 12:15:06 by mmuamba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			i = i + ft_strlenc(&s[i], c) - 1;
		}
		i++;
	}
	return (count);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	size_t	nb_word;
	char	**tab;

	i = 0;
	j = 0;
	if (s)
	{
		nb_word = count_word(s, c);
		if (!(tab = (char **)malloc(sizeof(char *) * (nb_word + 1))))
			return (NULL);
		while (s[i])
		{
			if (s[i] != c)
			{
				tab[j++] = ft_strsub(s, i, ft_strlenc(&s[i], c));
				i = i + ft_strlenc(&s[i], c) - 1;
			}
			i++;
		}
		tab[j] = NULL;
		return (tab);
	}
	return (NULL);
}
