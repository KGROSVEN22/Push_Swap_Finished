/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgrosven <kgrosven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:20:56 by kgrosven          #+#    #+#             */
/*   Updated: 2024/06/21 13:38:46 by kgrosven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sorted(t_ps_list **stack)
{
	t_ps_list	*temp;

	if (!stack || !(*stack))
		return (1);
	temp = (*stack);
	while (temp->next)
	{
		if (temp->number > temp->next->number)
			return (1);
		temp = temp->next;
	}
	return (0);
}
