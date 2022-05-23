/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noshiro <noshiro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:45:38 by noshiro           #+#    #+#             */
/*   Updated: 2022/05/23 16:34:40 by noshiro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static unsigned int	count_words(char const *s, char c)
{
	unsigned int	i;
	unsigned int	nb_strs;

	if (s[0] == '\0')
		return (0);
	i = 0;
	nb_strs = 0;
	// while (s[i] && s[i] == c)
	// 	i++;
	// while (s[i])
	// {
	// 	if (s[i] == c)
	// 	{
	// 		nb_strs++;
	// 		while (s[i] && s[i] == c)
	// 			i++;
	// 	}
	// 	else
	// 		i++;
	// }
	// if (s[i - 1] != c)
	// 	nb_strs++;
 while (s[i])
	{
		if (s[i] != c)
		{
			nb_strs++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (nb_strs);
}

static int		unleah(char **str, int size)
{
	while (size--)
		free(str[size]);
	return (-1);
}

static void		write_word(char *dest, const char *from, char charset)
{
	int	i;

	i = 0;
	while ((from[i] == charset || from[i] == '\0') == 0)
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

static int		write_split(char **split, const char *str, char charset)
{
	int		i;
	int		j;
	int		word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == charset || str[i] == '\0')
			i++;
		else
		{
			j = 0;
			while ((str[i + j] != charset && str[i + j] != '\0'))
				j++;
			split[word] = (char*)malloc(sizeof(char) * (j + 1));
			if (split[word] == NULL)
				return (unleah(split, word - 1));
			write_word(split[word], str + i, charset);
			i = i + j;
			word++;
		}
	}
	return (0);
}

char			**ft_split(const char *str, char c)
{
	char	**res;
	int		words;

	words = count_words(str, c);
	res = (char**)malloc(sizeof(char*) * (words + 1));
	if (res  == NULL)
		return (NULL);
	res[words] = NULL;
	if (write_split(res, str, c) == -1)
		return (NULL);
	return (res);
}
