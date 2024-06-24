/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapping.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgrosven <kgrosven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:21:13 by kgrosven          #+#    #+#             */
/*   Updated: 2024/06/21 13:46:23 by kgrosven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_ps_list **stack)
{
	t_ps_list	*temp;
	t_ps_list	*pos_2;

	temp = (*stack)->next->next;
	pos_2 = (*stack)->next;
	pos_2->next = (*stack);
	(*stack)->next = temp;
	(*stack) = pos_2;
}

void	sa(t_ps_list **stack_a)
{
	swap(stack_a);
	ft_printf("sa\n");
}

void	sb(t_ps_list **stack_b)
{
	swap(stack_b);
	ft_printf("sb\n");
}

void	ss(t_ps_list **stack_a, t_ps_list **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_printf("ss\n");
}
