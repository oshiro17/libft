/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noshiro <noshiro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:35:11 by noshiro           #+#    #+#             */
/*   Updated: 2022/04/29 17:12:04 by noshiro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*ptr;
	const unsigned char	*ptr2;

	ptr = (unsigned char *)dst;
	ptr2 = (unsigned char *)src;
	i = 0;
	if (!ptr && !ptr2)
		return (NULL);
	if (ptr2 < ptr)
		while (++i <= len)
			ptr[len - i] = ptr2[len - i];
	else
		while (len-- > 0)
			*(ptr++) = *(ptr2++);
	return (dst);
}

// int main(void)
// {
// 	char buf[] = "ABCDDEFG";

// 	//bufの先頭から3バイト進めた位置にbufの先頭から3バイトコピー
// 	ft_memmove(buf+6,buf,0);

// 	//表示
// 	printf("コピー後のbuf文字列→%s\n",buf);
// 	return 0;
// }
