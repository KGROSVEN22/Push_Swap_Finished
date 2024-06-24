/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgrosven <kgrosven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:17:03 by kgrosven          #+#    #+#             */
/*   Updated: 2024/06/24 13:03:22 by kgrosven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_ps_list **stack_a)
{
	t_ps_list	*temp;

	temp = *stack_a;
	while (temp)
	{
		ft_printf("number:%d\nindex:%d\n", temp->number, temp->index);
		temp = temp->next;
	}
}
