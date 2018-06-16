/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuamba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 17:44:26 by mmuamba           #+#    #+#             */
/*   Updated: 2018/06/05 11:19:29 by mmuamba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int				nbr;
	unsigned int	nb;
	size_t			len;
	char			*str;

	nb = (n < 0) ? -n : n;
	len = 1;
	if (n < 0)
		len = 2;
	nbr = nb;
	while (nbr /= 10)
		len++;
	if (!(str = (ft_strnew(len))))
		return (NULL);
	str[--len] = (nb % 10) + '0';
	while (nb /= 10)
		str[--len] = (nb % 10) + '0';
	if (n < 0)
		str[0] = '-';
	return (str);
}
