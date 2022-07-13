/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noshiro <noshiro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 00:21:56 by pantti            #+#    #+#             */
/*   Updated: 2022/06/25 17:10:33 by noshiro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

// // s = "Hello"
// // ft_putchar_fd => write H
// // ft_putchar_fd => write e
// // ft_putchar_fd => write l
// // ft_putchar_fd => write l
// // ft_putchar_fd => write o
// // write Hello
// int main (void)
// {
// 	ft_putstr_fd("aiueo",1);
// 	return(0);
// }