/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotating.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgrosven <kgrosven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:19:16 by kgrosven          #+#    #+#             */
/*   Updated: 2024/06/21 13:38:00 by kgrosven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_ps_list **stack)
{
	t_ps_list	*top_node;
	t_ps_list	*bot_node;
	t_ps_list	*second_node;

	top_node = *stack;
	bot_node = find_last_node(*stack);
	second_node = (*stack)->next;
	bot_node->next = top_node;
	top_node->next = NULL;
	*stack = second_node;
}

void	ra(t_ps_list **stack_a)
{
	rotate(stack_a);
	ft_printf("ra\n");
}

void	rb(t_ps_list **stack_b)
{
	rotate(stack_b);
	ft_printf("rb\n");
}

void	rr(t_ps_list **stack_a, t_ps_list **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_printf("rr\n");
}
