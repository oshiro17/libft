/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noshiro <noshiro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 18:56:26 by noshiro           #+#    #+#             */
/*   Updated: 2022/04/26 15:16:39 by noshiro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*buf, int	ch, size_t	n)
{
	size_t	i;

	if (!buf)
		return (0);
	i = 0;
	while (i < n)
	{
		*(unsigned char *)(buf) = (unsigned char)ch;
		buf++;
		i++;
	}
	return (buf);
}
