/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noshiro <noshiro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 17:13:28 by noshiro           #+#    #+#             */
/*   Updated: 2022/06/14 19:25:22 by noshiro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_strncmp(const char	*s1, const char	*s2, size_t	n)
{
	unsigned char	*s_s1;
	unsigned char	*s_s2;

	s_s1 = (unsigned char*)s1;
	s_s2 = (unsigned char*)s2;
	while (n--)
	{
		if (*s_s1 == *s_s2)
		{
			if (!*s_s1 && !*s_s2)
				break;
			s_s1++;
			s_s2++;
		}
		else
			return (*s_s1 - *s_s2);
	}
	return (0);
}
