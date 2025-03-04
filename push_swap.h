/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 19:03:37 by nogioni-          #+#    #+#             */
/*   Updated: 2025/01/29 19:09:09 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdbool.h>
#include <limits.h>
#include "../Libft/libft.h"

typedef struct	s_stack_node
{
	int	nbr;
	int	index;
	int	push_cost;
	int	above_median_line;
	int	cheapest;
	bool	above_median;
	bool	cheapest;
	struct	s_stack_node *target_node;
	struct	s_stack_node	*next;
	struct	s_stack_node	*prev
}	t_stack_node;

#endif