/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetan <hetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:56:32 by hetan             #+#    #+#             */
/*   Updated: 2025/05/13 17:09:30 by hetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	n;

	if (!s || !*s)
		return (NULL);
	n = ft_strlen(s);
	if (c == 0)
		return ((unsigned char *)(s + n));
	--n;
	while (n > 0 && *(s + n) != (char)c)
		n--;
	if (*(s + n) == (char)c)
		return ((unsigned char *)(s + n));
	return (NULL);
}
