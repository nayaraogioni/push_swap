/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 18:38:08 by nogioni-          #+#    #+#             */
/*   Updated: 2024/05/16 12:31:55 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*else_ft(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dest1;
	char	*src1;

	dest1 = (char *)dest;
	src1 = (char *)src;
	i = n - 1;
	while (n--)
	{
		dest1[i] = src1[i];
		i--;
	}
	return (dest1);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dest1;
	char	*src1;

	dest1 = (char *)dest;
	src1 = (char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest < src)
	{
		i = 0;
		while (n--)
		{
			dest1[i] = src1[i];
			i++;
		}
	}
	else
		else_ft(dest, src, n);
	return (dest1);
}
/*
#include <string.h>
int	main()
{
	char dest[] = "OgioniRugere";
	const char src[] = "Nayara";

	printf("%s, %s\n", dest, src);
	ft_memmove(dest, src, sizeof(char) * 6);
	printf("%s, %s\n", dest, src);
	printf("%s, %s\n", dest, src);
	memmove(dest, src, sizeof(char) * 6);
	printf("%s, %s", dest, src);
	return (0);
}
*/
