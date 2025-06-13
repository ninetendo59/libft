/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetan <hetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:20:07 by hetan             #+#    #+#             */
/*   Updated: 2025/06/13 19:29:56 by hetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	return value: `size_t`  return value number of ch copied to dest
	dst: destination string
	src: source string
	size: size to copy

	definition:
	
*/
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	n;

	if ((!dst && size == 0) || !src)
		return (ft_strlen(src));
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size <= len_dst)
		return (size + len_src);
	n = 0;
	while (*(src + n) && (len_dst + n) < (size - 1))
	{
		*(dst + len_dst + n) = *(src + n);
		n++;
	}
	*(dst + len_dst + n) = '\0';
	return (len_dst + len_src);
}
