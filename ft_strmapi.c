/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pantti <pantti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 22:01:00 by pantti            #+#    #+#             */
/*   Updated: 2022/05/30 22:17:53 by pantti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char           *ret;
    unsigned int    i;

    if (!s || !f)
        return (NULL);
    ret = (char *)malloc(ft_strlen(s)+ 1);
    if (!ret)
        return (NULL);
    i = 0;
    while (s[i])
    {
        ret[i] = f(i, s[i]);
        i++;
    }
    ret[i] = '\0';
    return (ret);
}
