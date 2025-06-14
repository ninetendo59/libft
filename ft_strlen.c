/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetan <hetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 02:05:42 by hetan             #+#    #+#             */
/*   Updated: 2025/05/20 22:33:59 by hetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	char	*tmp;

	tmp = (char *)s;
	if (!s)
		return (0);
	while (*tmp)
		tmp++;
	return ((size_t)(tmp - s));
}
