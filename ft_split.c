/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetan <hetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:29:01 by hetan             #+#    #+#             */
/*   Updated: 2025/05/19 15:29:49 by hetan            ###   ########.fr       */
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
		if (*str != c)
		{
			size++;
			while (*str != c && *str)
				str++;
		}
	}
	return (size);
}

static size_t	getsplitlen(char const *s, char c)
{
	int	split_size;

	split_size = 0;
	while (s[split_size] && s[split_size] != c)
		split_size++;
	return (split_size);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	n;

	split = malloc(sizeof(char *) * split_count(s, c));
	if (!split || !s)
		return (NULL);
	n = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s && *s != c)
		{
			split[n] = ft_calloc(getsplitlen(s, c) + 1, sizeof(char));
			if (!*split)
				return (NULL);
			ft_memcpy(split[n], s, getsplitlen(s, c));
			s += getsplitlen(s, c);
		}
		n++;
	}
	if (split)
		split[n] = NULL;
	return (split);
}

// # include <stdio.h>
// int main ()
// {
// 	char **tmp = ft_split("string ss isMy name is ", 's');
// 	int n = 0;

// 	while (tmp[n])
// 	{
// 		printf(
// 			"count %d\nstring: \"%s\"\nchar: \'%c\'\nascii: \'%d\'\nmem:%p\n\n",
// 			n + 1, tmp[n], *(tmp[n]), *(tmp[n]), tmp[n]);
// 		n++;
// 	}
// }
