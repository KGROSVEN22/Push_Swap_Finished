/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgrosven <kgrosven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:17:20 by kgrosven          #+#    #+#             */
/*   Updated: 2024/06/24 14:24:36 by kgrosven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	wrong_input(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (!(av[i][j] >= '0' && av[i][j] <= '9'))
			{
				ft_putstr_fd("Error\n", 2);
				exit(1);
			}
			j++;
		}
		i++;
	}
	return (1);
}

static int	empty_string(int argc, char **argv)
{
	if (argc == 1)
		exit (1);
	if (argv[1][0] == 0)
	{
		ft_putstr_fd("Error\n", 2);
		exit (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int			i;
	char		**array;
	t_ps_list	*stack_a;
	int			split_flag;

	split_flag = 0;
	i = -1;
	stack_a = NULL;
	empty_string(argc, argv);
	array = &argv[1];
	if (argc == 2)
		array = arg_2_thingy(&split_flag, argv);
	else
		wrong_input(argv);
	error_check(array, split_flag);
	while (array[++i])
		add_to_stack(&stack_a, new_node(ft_atol(array[i])));
	if (sorted(&stack_a) != 0)
		sort_stack(&stack_a);
	else
		free_stack(stack_a);
	if (argc == 2)
		free_split(array);
	return (0);
}

void	add_to_stack(t_ps_list **stack_a, t_ps_list *new_node)
{
	t_ps_list	*temp;

	if (*stack_a == NULL)
		*stack_a = new_node;
	else
	{
		temp = *stack_a;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
}

t_ps_list	*new_node(int value)
{
	t_ps_list	*new_node;

	new_node = malloc(sizeof(t_ps_list));
	if (new_node == NULL)
		return (NULL);
	new_node->number = value;
	new_node->index = -1;
	new_node->next = NULL;
	return (new_node);
}
