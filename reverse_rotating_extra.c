/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotating_extra.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgrosven <kgrosven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:19:04 by kgrosven          #+#    #+#             */
/*   Updated: 2024/06/21 13:34:52 by kgrosven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_ps_list	*find_last_node(t_ps_list *stack)
{
	while (stack->next)
		stack = stack->next;
	return (stack);
}

t_ps_list	*find_penult_node(t_ps_list *stack)
{
	while (stack->next->next)
		stack = stack->next;
	return (stack);
}
