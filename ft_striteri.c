/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pantti <pantti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 22:52:29 by pantti            #+#    #+#             */
/*   Updated: 2022/06/17 01:10:05 by pantti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
	return ;
}

// #include "stdio.h"
// #include "string.h"
// void ft_nonoka(unsigned int i, char *chr)
// {
// 	printf("%d,は%c",i,*chr);
// }
// int main(void){
// 	ft_striteri("sflskjdlfkjsl",ft_nonoka);
// 	return(0);
// }