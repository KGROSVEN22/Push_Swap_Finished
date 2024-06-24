/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgrosven <kgrosven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:20:05 by kgrosven          #+#    #+#             */
/*   Updated: 2024/06/24 13:24:04 by kgrosven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	distance_to_top(t_ps_list **stack_a)
{
	int			distance;
	t_ps_list	*temp;

	distance = 0;
	temp = (*stack_a);
	while (temp)
	{
		if (temp->index != 0)
			distance++;
		else
			return (distance);
		temp = temp->next;
	}
	return (distance);
}

static void	first_move(t_ps_list **stack_a, t_ps_list **stack_b, int distance)
{
	if (distance == 0)
		pb(stack_a, stack_b);
	else if (distance == 1)
	{
		ra(stack_a);
		pb(stack_a, stack_b);
	}
	else if (distance == 2)
	{
		ra(stack_a);
		ra(stack_a);
		pb(stack_a, stack_b);
	}
	else if (distance == 3)
	{
		rra(stack_a);
		rra(stack_a);
		pb(stack_a, stack_b);
	}
	else
	{
		rra(stack_a);
		pb(stack_a, stack_b);
	}
}

static void	second_move(t_ps_list **stack_a, t_ps_list **stack_b, int distance)
{
	if (distance == 0)
		pb(stack_a, stack_b);
	else if (distance == 1)
	{
		ra(stack_a);
		pb(stack_a, stack_b);
	}
	else if (distance == 2)
	{
		ra(stack_a);
		ra(stack_a);
		pb(stack_a, stack_b);
	}
	else
	{
		rra(stack_a);
		pb(stack_a, stack_b);
	}
}

void	sort_5(t_ps_list **stack_a, t_ps_list **stack_b)
{
	int			distance;
	t_ps_list	*temp;

	distance = distance_to_top(stack_a);
	first_move(stack_a, stack_b, distance);
	distance = second_distance_to_top(stack_a);
	second_move(stack_a, stack_b, distance);
	temp = (*stack_a);
	while (temp)
	{
		temp->index = -1;
		temp = temp->next;
	}
	adding_index(stack_a);
	sort_3(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}
