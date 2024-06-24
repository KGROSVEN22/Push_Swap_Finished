/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_exit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgrosven <kgrosven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:15:44 by kgrosven          #+#    #+#             */
/*   Updated: 2024/06/24 14:25:59 by kgrosven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_exit(char **array, int split_flag)
{
	if (split_flag == 1)
		free_split(array);
	ft_putendl_fd("Error", 2);
	exit(0);
}

char	**arg_2_thingy(int *split_flags, char **argv)
{
	char	**arr;

	arr = ft_split(argv[1], ' ');
	*split_flags = 1;
	return (arr);
}
