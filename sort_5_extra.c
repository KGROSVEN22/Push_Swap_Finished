/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5_extra.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgrosven <kgrosven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:20:22 by kgrosven          #+#    #+#             */
/*   Updated: 2024/06/24 11:17:00 by kgrosven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// t_ps_list	*find_second_lowest(t_ps_list **stack_a)
// {
// 	t_ps_list	*temp;
// 	t_ps_list	*second_lowest;

// 	temp = (*stack_a);
// 	second_lowest = (*stack_a);
// 	while (temp->next)
// 	{
// 		if (temp->next->index < temp->index && temp->index != 0)
// 			second_lowest = temp->next;
// 		temp = temp->next;
// 	}
// 	return (second_lowest);
// }

int	second_distance_to_top(t_ps_list **stack_a)
{
	int			distance;
	t_ps_list	*temp;

	distance = 0;
	temp = (*stack_a);
	while (temp)
	{
		if (temp->index != 1)
			distance++;
		else
			return (distance);
		temp = temp->next;
	}
	return (distance);
}
