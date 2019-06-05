/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbarnard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:24:52 by hbarnard          #+#    #+#             */
/*   Updated: 2019/06/05 11:48:17 by hbarnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
    unsigned int i;

    i = 0;
    if (!s1 || !s2)
        return (0);
    while (s1[i] && s2[i])
    {
        if (s1[i] != s2[i] && i < n)
            return (0);
        i++;
    }
    return (1);
}
