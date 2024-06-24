/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgrosven <kgrosven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:18:22 by kgrosven          #+#    #+#             */
/*   Updated: 2024/06/21 13:37:50 by kgrosven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	list_length(t_ps_list **stack)
{
	t_ps_list	*temp;
	int			i;

	i = 0;
	temp = (*stack);
	if (temp == NULL)
		return (0);
	while (temp)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}

static int	find_max_bits(t_ps_list **stack_a)
{
	int	max;
	int	max_bits;

	max_bits = 0;
	max = list_length(stack_a);
	while (max >> max_bits != 0)
		max_bits++;
	return (max_bits);
}

void	radix_sort(t_ps_list **stack_a, t_ps_list **stack_b)
{
	int			i;
	static int	j = -1;
	int			bits;
	int			size_of_list;

	bits = find_max_bits(stack_a);
	size_of_list = list_length(stack_a);
	while (++j < bits || sorted(stack_a))
	{
		i = 0;
		while (i++ < size_of_list && stack_a)
		{
			if ((((*stack_a)->index >> j) & 1) == 1)
				ra(stack_a);
			else
				pb (stack_a, stack_b);
		}
		while (list_length(stack_b) != 0)
		{
			pa(stack_a, stack_b);
		}
	}
}
