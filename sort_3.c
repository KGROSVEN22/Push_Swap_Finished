/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgrosven <kgrosven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:19:30 by kgrosven          #+#    #+#             */
/*   Updated: 2024/06/21 13:38:04 by kgrosven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_ps_list **stack_a)
{
	t_ps_list	*temp;

	temp = (*stack_a);
	if (temp->index == 2 && temp->next->index == 0)
		ra(stack_a);
	else if (temp->index == 2 && temp->next->index == 1)
	{
		ra(stack_a);
		sa(stack_a);
	}
	else if (temp->index == 0 && temp->next->index == 2)
	{
		rra(stack_a);
		sa(stack_a);
	}
	else if (temp->index == 1 && temp->next->index == 2)
		rra(stack_a);
	else if (temp->index == 1 && temp->next->index == 0)
		sa(stack_a);
}
