/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsato <tsato@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 20:54:27 by tsato             #+#    #+#             */
/*   Updated: 2022/05/29 17:06:38 by tsato            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	l_n;

	l_n = (long)n;
	if (l_n < 0)
	{
		ft_putchar_fd('-', fd);
		l_n *= -1;
	}
	if (9 < l_n)
		ft_putnbr_fd(l_n / 10, fd);
	ft_putchar_fd("0123456789"[l_n % 10], fd);
}
