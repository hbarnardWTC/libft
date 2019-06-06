/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbarnard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 13:44:27 by hbarnard          #+#    #+#             */
/*   Updated: 2019/06/06 14:03:01 by hbarnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_power_of(int a, int b)
{
	int i;
	int val;

	i = 1;
	if (b == 0)
		return (1);
	val = a;
	while (i < b)
	{
		val = a * val;
		i++;
	}
	return (val);
}
