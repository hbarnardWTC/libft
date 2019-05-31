/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbarnard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 09:07:48 by hbarnard          #+#    #+#             */
/*   Updated: 2019/05/31 09:35:21 by hbarnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	len;
	int i;

	i = 0;
	if (*s2 == '\0')
		return ((char *)s1);
	len = ft_strlen(s2);
	while (s1[i] && n >= len)
	{
		n--;
		if (*s1 == *s2 && ft_memcmp(s1, s2, len) == 0)
			return ((char *)s1);
		i++;
		s1++;
	}
	return (NULL);
}
