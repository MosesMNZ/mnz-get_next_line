/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmuamba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:37:42 by mmuamba           #+#    #+#             */
/*   Updated: 2018/06/05 11:51:00 by mmuamba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long long	nbr;

	i = 0;
	sign = 1;
	nbr = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
			|| str[i] == '\r' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
		sign = (str[i++] == '-') ? -1 : 1;
	while (str[i] != '\0' && ft_isdigit(str[i]))
	{
		if (nbr == 2147483648 && sign == -1)
			return (-2147483648);
		if (nbr > 2147483647)
		{
			if (sign == 1)
				return (-1);
			return (0);
		}
		nbr = (nbr * 10) + (str[i++] - '0');
	}
	return (nbr * sign);
}
