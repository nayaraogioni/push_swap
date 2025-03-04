/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:28:07 by nogioni-          #+#    #+#             */
/*   Updated: 2024/05/16 12:36:16 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	result = 0;
	i = 0;
	result = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!result)
		return (NULL);
	while (s[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
char	ft_plusone(unsigned int i, char c)
{
	return (c + 1);
}

int	main()
{
	char	str[] = "Hello World";
	char	*result = ft_strmapi(str, ft_plusone);

	printf("Original: %s\n", str);
	printf("Modificado: %s", result);
	free (result);
	return (0);
}
aplica uma determinada função a cada caractere
 de uma string e retorna uma nova string
 com os caracteres modificados
*/
