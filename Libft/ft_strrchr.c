/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:58:09 by nogioni-          #+#    #+#             */
/*   Updated: 2024/05/16 12:34:38 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)s + i);
		}
		i--;
	}
	if ((char)c == '\0')
		return ((char *)s + i);
	return (NULL);
}
/*
int	main()
{
	char	str[] = "Londrina";
	int	a;

	a = 'n';
	printf("%s", ft_strrchr(str, a));
	return (0);
}
*/
