/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotating.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgrosven <kgrosven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:18:42 by kgrosven          #+#    #+#             */
/*   Updated: 2024/06/21 13:43:03 by kgrosven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_ps_list **stack)
{
	t_ps_list	*top_node;
	t_ps_list	*bot_node;
	t_ps_list	*penult_node;

	top_node = *stack;
	bot_node = find_last_node(*stack);
	penult_node = find_penult_node(*stack);
	bot_node->next = top_node;
	penult_node->next = NULL;
	*stack = bot_node;
}

void	rra(t_ps_list **stack_a)
{
	reverse_rotate(stack_a);
	ft_printf("rra\n");
}

void	rrb(t_ps_list **stack_b)
{
	reverse_rotate(stack_b);
	ft_printf("rrb\n");
}

void	rrr(t_ps_list **stack_a, t_ps_list **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_printf("rrr\n");
}
