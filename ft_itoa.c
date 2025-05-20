/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetan <hetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 16:12:44 by hetan             #+#    #+#             */
/*   Updated: 2025/05/19 17:34:20 by hetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	calc_itoa_len(long int num)
{
	size_t	len;

	if (num == 0)
		return (1);
	len = 0;
	if (num < 0)
	{
		num *= -1;
		len++;
	}
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

static void	itoa_conv(char **ret_itoa, size_t itoa_len, long int num)
{
	char	*itoa;

	*ret_itoa = ft_calloc(calc_itoa_len(num) + 1, sizeof(char));
	if (!*ret_itoa)
	{
		*ret_itoa = NULL;
		return ;
	}
	itoa = *ret_itoa;
	if (num < 0)
	{
		num *= -1;
		*itoa = '-';
	}
	while (--itoa_len)
	{
		itoa[itoa_len] = (num % 10) + '0';
		num /= 10;
	}
	if (*itoa == '-')
		;
	else
		*itoa = (num % 10) + '0';
}

char	*ft_itoa(int n)
{
	long int	num;
	char		*itoa;

	num = (long int)n;
	itoa_conv(&itoa, calc_itoa_len(num), num);
	if (!itoa)
		return (NULL);
	return (itoa);
}

// char	*ft_itoa(int n)
// {
// 	char		*itoa;
// 	long int	num;
// 	size_t		len;

// 	num = (long int)n;
// 	len = (num <= 0);
// 	while (n)
// 	{
// 		n /= 10;
// 		len++;
// 	}
// 	itoa = ft_calloc(len + 1, sizeof(char));
// 	if (!itoa)
// 		return (NULL);
// 	if (num < 0)
// 	{
// 		*itoa = '-';
// 		num = -num;
// 	}
// 	if (num == 0)
// 		*itoa = '0';
// 	while (num)
// 	{
// 		itoa[--len] = (num % 10) + '0';
// 		num /= 10;
// 	}
// 	return (itoa);
// }
