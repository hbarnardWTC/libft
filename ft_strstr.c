/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbarnard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 07:02:01 by hbarnard          #+#    #+#             */
/*   Updated: 2019/05/31 09:07:35 by hbarnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	int		hlen;
	int		nlen;
	int		fnd;

	hlen = ft_strlen(haystack);
	nlen = ft_strlen(needle);
	i = 0;
	fnd = 0;
	if	(nlen == 0)
		return ((char *)haystack);
	while ((hlen - nlen) > 0 && haystack[i])
	{
		j = 0;
		fnd = 1;
		while (needle[j])
		{
			if (needle[j] != haystack[i + j])
				fnd = 0;
			j++;
		}
		if (fnd == 1)
			break;
		i++;
	}
	if (fnd == 1 || haystack == needle)
		return ((char *)&haystack[i]);
	else
		return (NULL);
}
