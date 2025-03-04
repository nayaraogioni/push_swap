/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 13:04:38 by nogioni-          #+#    #+#             */
/*   Updated: 2024/07/05 16:04:00 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_hexadec(unsigned long n, char c)
{
	char	*hexa;
	int		count;

	count = 0;
	if (c == 'x')
		hexa = "0123456789abcdef";
	if (c == 'X')
		hexa = "0123456789ABCDEF";
	if (n >= 16)
	{
		count += ft_hexadec(n / 16, c);
		count += ft_hexadec(n % 16, c);
	}
	else
		count += ft_putchar(hexa[n]);
	return (count);
}
/*hexa e uma string contendo os carac hexadec e count e para contar
o núm de carac impressos.
converte um número inteiro não negativo n em sua representação hexadecimal
utilizando letras minúsculas ou maiúsculas conforme o caractere c.
*/
