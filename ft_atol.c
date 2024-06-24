/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgrosven <kgrosven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:16:04 by kgrosven          #+#    #+#             */
/*   Updated: 2024/06/21 14:06:02 by kgrosven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long	over_flow(long neg)
{
	if (neg == 1)
		return ((long) LONG_MAX);
	return ((long)-LONG_MAX - 1L);
}

long	ft_atol(const char *str)
{
	long	rtn;
	long	neg;
	long	i;
	long	pre;

	rtn = 0;
	neg = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] > 47 && str[i] < 58))
	{
		pre = rtn;
		rtn = (rtn * 10) + (str[i] - 48);
		if (rtn < 0 || pre > rtn)
			return (over_flow(neg));
		i++;
	}
	return (rtn * neg);
}
