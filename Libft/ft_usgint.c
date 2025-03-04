/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usgint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:13:58 by nogioni-          #+#    #+#             */
/*   Updated: 2024/07/05 17:18:31 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_usgint(unsigned int n)
{
	int	dec;
	int	mod;

	dec = 0;
	if (n >= 10)
	{
		dec += ft_putnbr(n / 10);
	}
	mod = (n % 10 + '0');
	dec += ft_putchar(mod);
	return (dec);
}
