/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 12:03:03 by nogioni-          #+#    #+#             */
/*   Updated: 2024/05/25 16:44:04 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*my_node;

	my_node = malloc(sizeof(t_list));
	if (! my_node)
		return (NULL);
	my_node->content = content;
	my_node->next = NULL;
	return (my_node);
}
/* int	main()
{
	t_list	*newNode;

	newNode = ft_lstnew("Hello, world!");
	if (newNode != NULL)
	{
		printf("Novo nó criado com sucesso. 
		O conteúdo do nó é: %s\n", (char*)newNode->content);
	}
	free(newNode);
	return 0;
} */
