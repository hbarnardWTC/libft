/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbarnard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 13:11:08 by hbarnard          #+#    #+#             */
/*   Updated: 2019/06/06 13:11:22 by hbarnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_itoa(int n)
{
    int     i;
    char    *a;
    size_t  len;

    i = 0;
    len = ft_nbr_len(n);
    if (n < 0)
    {
    if  (!(a = (char *)malloc(len + 2)))
        return (NULL);
    a[i++] = '-';
    }
    else
    {
    if  (!(a = (char *)malloc(len + 1)))
        return (NULL);
    }
    while (i < (int)len)
    {
        a[len - i] = ft_power_of(10,i) + 48i;
        i++;
    }
    return (a);
}
