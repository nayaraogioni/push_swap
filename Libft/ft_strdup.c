/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:14:26 by nogioni-          #+#    #+#             */
/*   Updated: 2024/04/24 13:46:14 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*dest;

	dest = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	len = 0;
	if (!dest)
		return (NULL);
	while (s1[len] != '\0')
	{
		dest[len] = s1[len];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
/*
int	main()
{
	char *str = "Nayara linda";
	char *dest;

	dest = ft_strdup(str);
	printf("%s\n", ft_strdup(str));
	printf("%s", dest);
	return (0);
}
*/
