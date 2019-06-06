/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbarnard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:24:45 by hbarnard          #+#    #+#             */
/*   Updated: 2019/06/06 11:24:46 by hbarnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	int		i;
	int		start;
	int		end;
	char	*trim;

	if (!s)
		return (NULL);
	start = 0;
	end = ft_strlen(s) - 1;
	while (ft_iswhitespace(s[start]) == 1)
		start++;
	if (s[start] == '\0')
		return ("");
	while (ft_iswhitespace(s[end]) == 1)
		end--;
	if (!(trim = malloc(end - start + 2)))
		return (NULL);
	i = start;
	while (i <= end)
	{
		trim[i - start] = s[i];
		i++;
	}
	trim[i - start] = '\0';
	return (trim);
}
