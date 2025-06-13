/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetan <hetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:29:01 by hetan             #+#    #+#             */
/*   Updated: 2025/05/20 22:46:56 by hetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	split_count(const char *str, char c)
{
	size_t	size;

	size = 0;
	while (*str)
	{
		while (*str == c && *str)
			str++;
		if (*str != c && *str)
		{
			size++;
			while (*str != c && *str)
				str++;
		}
	}
	return (size);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	n;
	size_t	chr_len;

	result = malloc(sizeof(char *) * (split_count(s, c) + 1));
	if (!result)
		return (NULL);
	n = 0;
	chr_len = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s && *s != c)
		{
			chr_len = ft_strlen(s) - ft_strlen(ft_strchr(s, c));
			result[n] = ft_substr(s, 0, chr_len);
			s += chr_len;
			n++;
		}
	}
	result[n] = NULL;
	return (result);
}
