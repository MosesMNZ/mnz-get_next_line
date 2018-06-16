/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuamba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 14:33:13 by mmuamba           #+#    #+#             */
/*   Updated: 2018/06/05 10:32:44 by mmuamba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	char	*str;
	size_t	len;

	len = (ft_strlen(s1));
	str = (ft_strnstr(s1, s2, len));
	return (str);
}
