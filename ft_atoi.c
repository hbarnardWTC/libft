/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbarnard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:35:26 by hbarnard          #+#    #+#             */
/*   Updated: 2019/06/03 09:03:16 by hbarnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int neg;
	int nbr;
	int i;

	i = 0;
	neg = 1;
	nbr = 0;
	while (ft_iswhitespace(s[i]))
		i++;
	if (s[i] == '-')
	{
		neg *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (nbr <= 2147483647 / 10)
			nbr = nbr * 10 + (s[i] - 48);
		else if (neg == 1)
			return (-1);
		else
			return (0);
		i++;
	}
	return (nbr * neg);
}
