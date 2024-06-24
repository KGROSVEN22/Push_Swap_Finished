/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgrosven <kgrosven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:15:10 by kgrosven          #+#    #+#             */
/*   Updated: 2024/06/21 14:06:17 by kgrosven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	checking_dups(int temp, char **array)
{
	int	i;

	i = 1;
	while (array[i])
	{
		if (temp == ft_atol(array[i]))
			return (1);
		i++;
	}
	return (0);
}

static int	number_check(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		ft_putendl_fd("Error", 2);
		exit(0);
	}
	if (str[i] == '-' || str[i] == '+')
	{
		i++;
		if (!ft_isdigit(str[i]))
			return (1);
	}
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
			return (1);
		i++;
	}
	return (0);
}

static size_t	my_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i])
		i++;
	return (i);
}

void	error_check(char **array, int split_flag)
{
	int		i;
	long	temp;

	i = 0;
	while (array[i])
	{
		temp = ft_atol(array[i]);
		if (number_check(array[i]) == 1)
			error_exit(array, split_flag);
		if (my_strlen(array[i]) > 11)
			error_exit(array, split_flag);
		if (temp < MIN_INT || temp > MAX_INT)
			error_exit(array, split_flag);
		if (checking_dups(temp, &array[i]) == 1)
			error_exit(array, split_flag);
		i++;
	}
}
