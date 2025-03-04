/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 12:48:25 by nogioni-          #+#    #+#             */
/*   Updated: 2024/05/23 18:28:09 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/* new->next = *lst (o novo node 'new' aponta para o primeiro no da lista)
*lst = new (atualiza o ponteiro inicial da lista para que ele aponte
para o novo node 'new') */
