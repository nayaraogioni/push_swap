/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:46:47 by nogioni-          #+#    #+#             */
/*   Updated: 2024/05/23 18:18:40 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*lst_temp;
	t_list	*next_node;

	lst_temp = *lst;
	if (!lst || !del)
		return ;
	while (lst_temp)
	{
		next_node = lst_temp->next;
		del(lst_temp->content);
		free(lst_temp);
		lst_temp = next_node;
	}
	*lst = NULL;
}
/* As verificações de NULL são uma prática recomendada para evitar
acessos inválidos à memória e falhas de segmentação. Elas não
são obrigatórias, mas ajudam a tornar seu código mais seguro e robusto
next_node é uma variável aux que está sendo usada para armazenar
temporariamente o endereço do próximo nó. Ela é atualizada em cada iteração
do loop para armazenar o próximo nó na lista. Isso é crucial para garantir
que você não perca a referência aos próximos nós enquanto
libera a memória do nó atual.
 */
