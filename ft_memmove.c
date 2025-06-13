/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetan <hetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:24:19 by hetan             #+#    #+#             */
/*   Updated: 2025/05/20 23:10:47 by hetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

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
	else
	{
		i = 0;
		while (i < n)
		{
			*((unsigned char *)(dest + i))
				= *((const unsigned char *)(src + i));
			i++;
		}
	}
	return (dest);
}
