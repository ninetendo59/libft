/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetan <hetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:18:22 by hetan             #+#    #+#             */
/*   Updated: 2025/05/20 20:39:23 by hetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned start, size_t len)
{
	size_t	s_len;
	char	*substr;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if ((s_len - start) < len)
		len = s_len - start;
	if (start >= s_len)
		return (ft_strdup(""));
	substr = ft_calloc(sizeof(*substr), len + 1);
	if (!substr)
		return (NULL);
	while (*s && start--)
		s++;
	start = 0;
	while (*s && start < len)
	{
		*(substr + start) = *(s + start);
		start++;
	}
	return (substr);
}
