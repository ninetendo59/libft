/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetan <hetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 15:55:25 by hetan             #+#    #+#             */
/*   Updated: 2025/05/20 20:11:12 by hetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*duplicate;

	duplicate = ft_calloc (sizeof(*s), ft_strlen(s) + 1);
	if (!duplicate)
		return (NULL);
	duplicate = ft_memcpy(duplicate, s, ft_strlen(s));
	return (duplicate);
}
