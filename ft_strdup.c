/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbarnard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:48:34 by hbarnard          #+#    #+#             */
/*   Updated: 2019/05/23 14:20:46 by hbarnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *s1)
{
	int		i;
	char	*str;

	i = 0;
	str = (char*)malloc((ft_strlen(s1) + 1));
	while(s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	return (str);
}