/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetan <hetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 15:55:25 by hetan             #+#    #+#             */
/*   Updated: 2025/05/15 17:17:19 by hetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*duplicate;

	duplicate = malloc (sizeof(*s) * ft_strlen(s) + 1);
	if (!duplicate)
		return (NULL);
	duplicate = ft_memcpy(duplicate, s, ft_strlen(s));
	return (duplicate);
}
