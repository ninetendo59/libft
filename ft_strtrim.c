/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetan <hetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 18:35:11 by hetan             #+#    #+#             */
/*   Updated: 2025/05/19 12:28:24 by hetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	in;
	size_t	out;
	char	*trim;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(""));
	in = 0;
	out = ft_strlen(s1);
	while (s1[in] && ft_strchr(set, *(s1 + in)))
		in++;
	while (out > in && ft_strchr(set, *(s1 + out - 1)))
		out--;
	trim = (char *)malloc(sizeof(char) * ((out - in) + 1));
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, (s1 + in), ((out - in) + 1));
	return (trim);
}
