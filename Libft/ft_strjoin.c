/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 21:02:53 by nogioni-          #+#    #+#             */
/*   Updated: 2024/05/16 12:32:25 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*new;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	new = (char *) malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (! new)
		return (NULL);
	while (j < ft_strlen(s1))
	{
		new[j] = s1[j];
		j++;
	}
	while (i < ft_strlen(s2))
	{
		new[j + i] = s2[i];
		i++;
	}
	new[i + j] = '\0';
	return (new);
}
/*
int	main()
{
	char	s1[] = "Nayara";
	char	s2[] = "Ogioni";
	char	*new;

	printf("s1: %s\ns2: %s\n", s1, s2);
	new = (char *)ft_strjoin(s1, s2);
	printf("new: %s", new);
	free(new);
	return (0);
}
*/
