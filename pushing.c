/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgrosven <kgrosven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:17:57 by kgrosven          #+#    #+#             */
/*   Updated: 2024/06/24 13:07:03 by kgrosven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_errors(t_ps_list **src_list, t_ps_list **dest_list)
{
	(void)src_list;
	if (!dest_list)
	{
		ft_putstr_fd("Error: Destination stack pointer is NULL.\n", 2);
		return (0);
	}
	return (1);
}

static void	push(t_ps_list **src_list, t_ps_list **dest_list)
{
	t_ps_list	*top_src;
	t_ps_list	*top_dest;

	if (!check_errors(src_list, dest_list))
		return ;
	top_dest = (*dest_list);
	top_src = (*src_list);
	*src_list = top_src->next;
	top_src->next = top_dest;
	*dest_list = top_src;
}

static void	push_a(t_ps_list **src_list, t_ps_list **dest_list)
{
	t_ps_list	*top_src;
	t_ps_list	*top_dest;

	if (!check_errors(src_list, dest_list))
		return ;
	top_src = (*src_list);
	top_dest = (*dest_list);
	*dest_list = top_dest->next;
	top_dest->next = top_src;
	*src_list = top_dest;
}

void	pa(t_ps_list **stack_a, t_ps_list **stack_b)
{
	push_a(stack_a, stack_b);
	if (*stack_a)
		ft_printf("pa\n");
	else
		ft_printf("Error: Failed to push from stack B to stack A.\n");
}

void	pb(t_ps_list **stack_a, t_ps_list **stack_b)
{
	push(stack_a, stack_b);
	if (*stack_b)
		ft_printf("pb\n");
	else
		ft_printf("Error: Failed to push from stack A to stack B.\n");
}
