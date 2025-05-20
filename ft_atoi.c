/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hetan <hetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 14:47:51 by hetan             #+#    #+#             */
/*   Updated: 2025/05/20 11:33:41 by hetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ret_overflow_val(int sign)
{
	if (sign == 1)
		return (-1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	long int	ret;
	int			sign;

	ret = 0;
	sign = 1;
	while (*nptr && (*nptr == ' ' || (*nptr >= '\t' && *nptr <= '\r')))
		nptr++;
	if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	if (ft_isdigit(*nptr) == 0)
		return (0);
	while (ft_isdigit(*nptr))
	{
		if (ret > (LONG_MAX - (*nptr - '0')) / 10)
			return (ret_overflow_val(sign));
		ret = (ret * 10) + (*nptr++ - '0');
	}
	return (sign * ret);
}
