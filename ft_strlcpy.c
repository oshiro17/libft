/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pantti <pantti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 17:10:12 by noshiro           #+#    #+#             */
/*   Updated: 2022/06/19 07:30:54 by pantti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	idx;

	idx = 0;
	while (src[idx] && idx + 1 < dstsize)
	{
		dst[idx] = src[idx];
		idx++;
	}
	if (dstsize)
		dst[idx] = '\0';
	return (ft_strlen(src));
}

// copies up to dstsize - 1 characters from the string src to dst, NUL-terminating the result if dstsize is not 0.