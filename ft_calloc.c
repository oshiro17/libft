/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noshiro <noshiro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 15:23:55 by noshiro           #+#    #+#             */
/*   Updated: 2022/06/19 14:25:10 by noshiro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*s1;

	if (count > SIZE_MAX / size)
		return (NULL);
	s1 = malloc(count * size);
	if (!s1)
		return (NULL);
	ft_bzero(s1, count * size);
	return (s1);
}
// // nmemb * sizesize_tの範囲を超えてしまってる時、
// // mallocに任しちゃう
// #include <stdlib.h>
// #include <stdio.h>
// int main(void)
// {
// 	void	*ptr;
// 	ptr = calloc(SIZE_MAX, SIZE_MAX);
// 	printf("%p",ptr);
// 	return(0);
// }