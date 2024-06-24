/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgrosven <kgrosven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:16:46 by kgrosven          #+#    #+#             */
/*   Updated: 2024/06/21 13:42:43 by kgrosven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_ps_list	*find_min(t_ps_list **stack)
{
	t_ps_list	*temp;
	t_ps_list	*min;

	temp = (*stack);
	min = (*stack);
	while (temp)
	{
		if (min->index != -1 && min->next)
		{
			min = min->next;
		}
		if (temp->number < min->number && temp->index == -1)
		{
			min = temp;
		}
		temp = temp->next;
	}
	return (min);
}

void	adding_index(t_ps_list **stack)
{
	t_ps_list	*temp;
	t_ps_list	*count;
	int			i;
	int			c;

	i = 0;
	c = 0;
	count = *stack;
	temp = find_min(stack);
	while ((count)->next != NULL)
	{
		count = count->next;
		c++;
	}
	while (i <= c)
	{
		temp->index = i++;
		temp = find_min(stack);
	}
}
