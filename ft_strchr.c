/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetan <hetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:36:02 by hetan             #+#    #+#             */
/*   Updated: 2025/05/20 16:15:02 by hetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	n;

	if ((!s || !*s) && c)
		return (NULL);
	if (!*s && (char)c == '\0')
		return ((char *)s);
	n = 0;
	while (*(s + n) && c == 0)
	{
		n++;
		if (*(s + n) == '\0')
			return ((char *)(s + n));
	}
	n = 0;
	while (*(s + n) && *(s + n) != (char)c)
		n++;
	if (*(s + n) == (char)c)
		return ((char *)(s + n));
	return (NULL);
}
