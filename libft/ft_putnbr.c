/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuamba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 10:13:20 by mmuamba           #+#    #+#             */
/*   Updated: 2018/06/05 11:21:27 by mmuamba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long	nbr;
	int		i;
	char	value[12];

	i = 0;
	nbr = n;
	if (n < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (n == 0)
		ft_putchar('0');
	while (nbr > 0)
	{
		value[i++] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	i--;
	while (i >= 0)
		ft_putchar(value[i--]);
}
