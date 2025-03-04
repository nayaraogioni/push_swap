/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 18:21:12 by nogioni-          #+#    #+#             */
/*   Updated: 2024/05/23 18:26:26 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*void (*del)(void*): Um ponteiro para uma função que aceita
um void* (qualquer tipo de dado) como parâmetro e retorna void.
Esta função será usada para liberar a memória do conteúdo do nó.
A função específica que del aponta é decidida no momento em que
o usuario chama a ft_lstdelone e passa a função como argumento.
exemplo:
ft_lstdelone(node, free_content)*/
