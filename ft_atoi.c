/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noshiro <noshiro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 15:41:05 by noshiro           #+#    #+#             */
/*   Updated: 2022/06/14 15:02:57 by noshiro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		z;
	int		k;

	k = 0;
	z = 1;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v'
		|| *str == '\f' || *str == '\r')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			z = z * -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		k = (k * 10) + ((int)*str - 48);
		str++;
	}
	return (k * z);
}

//intの範囲を超える時は未定義
//#include "stdio.h"
//#include "string.h"
//
//int main()
//{
//	printf("original :%d\n", atoi("---1"));
//	printf("nonoka :%d\n", ft_atoi("---1"));
//	return 0;
//}