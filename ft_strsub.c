/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsub.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbarnard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 13:11:52 by hbarnard          #+#    #+#             */
/*   Updated: 2019/06/05 13:16:06 by hbarnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
    char    *sub;
    size_t  size;
    int     i;

    i = 0;
    size = len - start + 1;
    if (!(sub = (char *)malloc(size)))
        return (NULL);
    if (s == NULL || len == 0)
        return (NULL);
    while (len >= start + i)
    {
        sub[i] = s[start + i];
        i++;
    }
    sub[i] = '\0';
    return (sub);
}