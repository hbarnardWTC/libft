/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbarnard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 10:10:06 by hbarnard          #+#    #+#             */
/*   Updated: 2019/05/27 14:31:44 by hbarnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nbr)
{
	long int	long_nbr;

	long_nbr = (long int)nbr;
	if (long_nbr < 0)
	{
		ft_putchar('-');
		long_nbr = -long_nbr;
	}
	if (long_nbr >= 10)
	{
		ft_putnbr(long_nbr / 10);
		ft_putnbr(long_nbr % 10);
	}
	else
		ft_putchar(long_nbr + '0');
}
