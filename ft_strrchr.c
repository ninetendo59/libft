/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetan <hetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:56:32 by hetan             #+#    #+#             */
/*   Updated: 2025/05/31 00:37:44 by hetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	n;

	if ((!s || !*s) && c)
		return (NULL);
	if (!*s && (char)c == '\0')
		return ((char *)s);
	n = ft_strlen(s);
	if (c == 0)
		return ((char *)(s + n));
	--n;
	while (n > 0 && *(s + n) != (char)c)
		n--;
	if (*(s + n) == (char)c)
		return ((char *)(s + n));
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	printf("ft: %s\nori: %s\n", ft_strrchr("", '\0'), strrchr("", '\0'));
// }
