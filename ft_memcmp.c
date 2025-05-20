/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetan <hetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 23:41:54 by hetan             #+#    #+#             */
/*   Updated: 2025/05/15 12:00:46 by hetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (n);
	while (i < n)
	{
		if (*((const unsigned char *)(s1 + i)) !=
			*((const unsigned char *)(s2 + i)))
		{
			return ((int)(*((const unsigned char *)(s1 + i)) -
				*((const unsigned char *)(s2 + i))));
		}
		i++;
	}
	return (0);
}
