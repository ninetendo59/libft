/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetan <hetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:20:07 by hetan             #+#    #+#             */
/*   Updated: 2025/05/13 16:27:37 by hetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if ((!size && !dst) || ft_strlen(dst) >= size)
		return (ft_strlen(src) + size);
	while (*(src + i) && i < (size - ft_strlen(dst) - 1))
		*(dst + i++) = *(src + i);
	*(dst + ft_strlen(dst) + i) = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
