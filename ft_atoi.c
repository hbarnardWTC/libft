/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbarnard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:35:26 by hbarnard          #+#    #+#             */
/*   Updated: 2019/05/28 09:43:03 by hbarnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *s)
{
	int neg;
	int nbr;
	int i;

	i = 0;
	neg = 1;
	nbr = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\v' || s[i] == '\f'
			|| s[i] == '\t' || s[i] == '\r')
		i++;
	if (s[i] == '-' || s[i] == '+')
	{	
		neg *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		nbr = nbr * 10 + (s[i] - 48);
		i++;
	}
	return (nbr * neg);
}
