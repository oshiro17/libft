/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noshiro <noshiro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 18:10:30 by noshiro           #+#    #+#             */
/*   Updated: 2022/05/27 18:06:20 by noshiro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	trim_counter(char const	*s1, char const	*set)
{
	size_t	i;
	size_t	j;
	size_t	trim_count;

	i = 0;
	trim_count = 0;
	while (set[i])
	{
		j = 0;
		while (s1[j])
		{
			if (s1[j] == set[i])
			{
				trim_count++;
			}
			j++;
		}
		i++;
	}
	return (trim_count);
}

char	*trimmer(char *new_str, char const	*s1, char const	*set)
{
	size_t	i;
	size_t	k;

	k = 0;
	while (*s1)
	{
		i = 0;
		while (set[i])
		{
			if (*s1 == set[i])
				break ;
			if (*s1 != set[i])
				i++;
			if (set[i] == '\0')
			{
				new_str[k] = *s1;
				k++;
			}
		}
		s1++;
	}
	new_str[k] = '\0';
	return (new_str);
}

char	*ft_strtrim(char const	*s1, char const	*set)
{
	size_t	trim_count;
	char	*new_str;

	if (!s1)
		return (0);
	if (!set[0])
		return (ft_strdup(s1));
	trim_count = trim_counter(s1, set);
	new_str = (char *)malloc(sizeof(char) * (ft_strlen(s1) - trim_count + 1));
	if (!new_str)
		return (0);
	return (trimmer(new_str, s1, set));
}
