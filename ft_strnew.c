/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbarnard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 12:19:29 by hbarnard          #+#    #+#             */
/*   Updated: 2019/06/04 12:19:31 by hbarnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnew(size_t size)
{
    char    *s;
    size_t  i;

    i = 0;
    if (size <= 0)
        return (NULL);
    if  (!(s = (char *)malloc(size + 1)))
        return (NULL);
    while (i < size + 1)
    {
        s[i] = 0;
        i++;
    }
    return (s);
}