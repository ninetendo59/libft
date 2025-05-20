/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetan <hetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:35:31 by hetan             #+#    #+#             */
/*   Updated: 2025/05/19 20:31:01 by hetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		n;
	char		*result;

	if (!s || !f)
		return (NULL);
	result = ft_calloc(sizeof(*result), ft_strlen(s) + 1);
	if (!result)
		return (NULL);
	n = 0;
	while (*(s + n))
	{
		*(result + n) = (*f)(n, *(s + n));
		n++;
	}
	return (result);
}
