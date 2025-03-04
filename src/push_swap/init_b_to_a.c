/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_b_to_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:26:20 by nogioni-          #+#    #+#             */
/*   Updated: 2025/03/04 17:36:18 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	set_target_b(t_stack_node *a, t_stack_node *b)
{
	t_stack_node	*current_a;
	t_stack_node	*target_node;
	long			closest_bigger;

	while (b)
	{
		closest_bigger = INT_MAX;
		current_a = a;
		while (current_a)
		{
			if (current_a->nbr > b->nbr && current_a->nbr < closest_bigger)
			{
				closest_bigger = current_a->nbr;
				target_node = current_a;
			}
			current_a = current_a->next;
		}
		if (closest_bigger == LONG_MAX)
			b->target_node = find_min(a);
		else
			b->target_node = target_node;
		b = b->next;
	}
}
void	init_nodes_b(t_stack_node *a, t_stack_node *b)
{
	current_node_index(a);
	current_node_index(b);
	set_target_a(a, b);
}