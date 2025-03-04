/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:55:20 by nogioni-          #+#    #+#             */
/*   Updated: 2024/04/12 19:50:13 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*a;

	a = (unsigned char *)str;
	while (n > 0)
	{
		a[n - 1] = c;
		n--;
	}
	return (a);
}
/*
#include <stdio.h>
int	main()
{
	char	str[15] = "ABCD EFGH";

	printf("%s",(char *)ft_memset(str, 'x', 3));
	return (0);
}
*/
