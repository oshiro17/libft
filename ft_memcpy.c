/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noshiro <noshiro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 21:11:43 by noshiro           #+#    #+#             */
/*   Updated: 2022/04/26 15:16:25 by noshiro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*p1;
	char	*p2;

	p1 = (char *)dst;
	p2 = (char *)src;
	while (n-- > 0)
	{
		*p1 = *p2;
		p1++;
		p2++;
	}
	return (dst);
}
