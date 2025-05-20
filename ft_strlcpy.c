/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetan <hetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:42:28 by hetan             #+#    #+#             */
/*   Updated: 2025/05/13 16:19:44 by hetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (!dst || !src)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (i < size -1 && *(src + i))
	{
		*(dst + i) = *(src + i);
		i++;
	}
	if (i < size)
		*(dst + i) = '\0';
	while (*(src + i))
		i++;
	return (i);
}
