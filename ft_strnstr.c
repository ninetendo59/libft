/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetan <hetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:33:45 by hetan             #+#    #+#             */
/*   Updated: 2025/05/20 11:35:13 by hetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	n;
	size_t	temp;

	if (!*little)
		return ((char *)big);
	n = 0;
	temp = 0;
	while (n < len && *(big + n))
	{
		temp = 0;
		while (*(big + n + temp) == *(little + temp) && *(big + n + temp)
			&& (temp + n) < len)
		{
			if (*(little + temp + 1) == '\0')
				return ((char *)(big + n));
			temp++;
		}
		n++;
	}
	return (NULL);
}
