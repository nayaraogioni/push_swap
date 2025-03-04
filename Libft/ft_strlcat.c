/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:07:36 by nogioni-          #+#    #+#             */
/*   Updated: 2024/05/16 11:40:58 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;

	i = 0;
	j = ft_strlen(dest);
	dest_len = j;
	if (size == 0)
		return (ft_strlen(src));
	if (j >= size)
		return (size + ft_strlen(src));
	while (src[i] != '\0' && j < size - 1)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest_len + ft_strlen(src));
}
/*
int	main()
{
	char	dest[] = "Nayara";
	char	src[] = " Ogioni";

	printf("Antes:\ndest: %s\nsrc: %s\n", dest, src);
	printf("%zu\n", ft_strlcat(dest, src, 13));
	printf("Depois:\ndest: %s\nsrc: %s", dest, src);
	return (0);
}
*/
