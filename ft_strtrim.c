/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noshiro <noshiro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 18:10:30 by noshiro           #+#    #+#             */
/*   Updated: 2022/05/19 10:10:41 by noshiro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const	*s1, char const	*set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	trim_count;
	char	*new_str;

	if (!s1)
		return (0);
	if (!set[0])
		return (ft_strdup(s1));
	i = 0;
	trim_count = 0;
	while(set[i])
	{
		j = 0;
		while(s1[j])
		{
			if (s1[j] == set[i])
			{
				trim_count++;
			}
			j++;
		}
		i++;
	}
	new_str = (char *)malloc(sizeof(char) * (ft_strlen(s1) - trim_count + 1));
	if (!new_str)
		return (0);
	j = 0;
	k = 0;
	while(s1[j])
	{
		i = 0;
		while(set[i])
		{
			if(s1[j] == set[i])
				break;
			if(s1[j] != set[i])
				i++;
			if (set[i] == '\0')
			{
				new_str[k] = s1[j];
				k++;
			}
		}
		j++;
	}
	new_str[k] = '\0';
	return(new_str);
}
