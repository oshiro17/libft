/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panti <panti@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 15:41:05 by noshiro           #+#    #+#             */
/*   Updated: 2023/07/05 03:00:17 by panti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

int	skip_space(const char **str)
{
	int	sign;

	sign = 1;
	while (**str == ' ' || **str == '\n' || **str == '\t' || **str == '\v'
		|| **str == '\f' || **str == '\r')
		(*str)++;
	if (**str == '+' || **str == '-')
	{
		if (**str == '-')
			sign = -1;
		(*str)++;
	}
	return (sign);
}

int	ft_atoi(const char *str)
{
	int					sign;
	unsigned long long	ret;

	ret = 0;
	sign = skip_space(&str);
	while (*str >= '0' && *str <= '9')
	{
		if (sign == 1)
		{
			if (ret > LONG_MAX / 10 || (ret == LONG_MAX / 10 && *str - '0' > 7))
				return (-1);
		}
		if (sign == -1)
		{
			if (ret > LONG_MAX / 10 || (ret == LONG_MAX / 10 && *str - '0' > 8))
				return (0);
		}
		ret = (ret * 10) + ((int)*str++ - '0');
	}
	return ((int)ret * sign);
}

// int main()
// {
// 	printf("original :%d\n", atoi(" 	   18441618"));
// 	printf("nonoka :%d\n", ft_atoi(" 	18618"));
// 	return 0;
// }