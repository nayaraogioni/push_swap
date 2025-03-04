/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 11:06:34 by nogioni-          #+#    #+#             */
/*   Updated: 2024/05/16 11:14:14 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*my_dest;
	char	*my_src;

	i = 0;
	my_dest = (char *)dest;
	my_src = (char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		my_dest[i] = my_src[i];
		i++;
	}
	return (my_dest);
}
/*
int	main()
{
	char	dest[10];
	char	src[] = "Nayara";

	printf("BEFORE:\nDest: %s\nSource: %s\n", dest, src);
	ft_memcpy(dest, src, 3);
	printf("AFTER:\nDest: %s\nSource: %s", dest, src);
	return (0);
}
*/
