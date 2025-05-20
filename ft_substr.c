/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetan <hetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:18:22 by hetan             #+#    #+#             */
/*   Updated: 2025/05/15 17:37:33 by hetan            ###   ########.fr       */
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
	if (s_len < len)
		len = s_len;
	if (start >= s_len)
		return (ft_strdup(""));
	substr = malloc(sizeof(*substr) * len + 1);
	if (!substr)
		return (NULL);
	while (*s && start--)
		s++;
	substr = ft_memcpy(substr, s, len);
	*(substr + len) = '\0';
	return (substr);
}
