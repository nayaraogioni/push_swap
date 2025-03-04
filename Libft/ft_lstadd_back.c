/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 20:29:54 by nogioni-          #+#    #+#             */
/*   Updated: 2024/05/23 18:27:58 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*my_lst;

	my_lst = *lst;
	if (!lst || !new)
		return ;
	if (!my_lst)
	{
		*lst = new;
		return ;
	}
	while (my_lst->next)
	{
		my_lst = my_lst->next;
	}
	my_lst->next = new;
}
