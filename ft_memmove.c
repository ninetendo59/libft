/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetan <hetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:24:19 by hetan             #+#    #+#             */
/*   Updated: 2025/05/13 14:40:30 by hetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if ((!dest && !src) || (dest == src))
		return (dest);
	if (src < dest)
	{
		while (n--)
		{
			*((unsigned char *)(dest + n))
				= *((const unsigned char *)(src + n));
		}
		return (dest);
	}
	while (n--)
	{
		*((unsigned char *)(dest + n))
			= *((const unsigned char *)(src + n));
	}
	return (dest);
}
