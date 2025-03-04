/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 13:00:16 by nogioni-          #+#    #+#             */
/*   Updated: 2024/07/16 17:51:59 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_format(const char *str, va_list args)
{
	int	count;

	count = 0;
	if (*str == 'c')
		count += ft_putchar(va_arg(args, int));
	if (*str == 's')
		count += ft_putstr(va_arg(args, char *));
	if (*str == 'p')
		count += ft_putptr(va_arg(args, void *));
	if (*str == 'd')
		count += ft_putnbr(va_arg(args, int));
	if (*str == 'i')
		count += ft_putnbr(va_arg(args, int));
	if (*str == 'u')
		count += ft_usgint(va_arg(args, unsigned int));
	if (*str == 'x' || *str == 'X')
		count += ft_hexadec(va_arg(args, unsigned int), *str);
	if (*str == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;
	int		i;

	count = 0;
	i = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			i++;
			count += check_format(&str[i], args);
		}
		else
		{
			count += ft_putchar(str[i]);
		}
		i++;
	}
	va_end (args);
	return (count);
}
/* #include <limits.h>
#include <stdio.h>

int	main(void)
{
	char			c;
	char			*str;
	int				integer;
	unsigned int	uns_int;
	unsigned int	hex;
	void			*ptr;
	int				y;
	int				x;

	c = '0';
	str = "String Teste$%0";
	integer = INT_MAX;
	uns_int = -2147483648;
	hex = 1;
	ptr = &str;
	ft_printf("\nft_printf:\n");
	x = ft_printf("Char: %c\nString: %s\nInteger: %d\nInteger:\
 %i\nUnsigned Integer: %u\nHexadecimal x: %x\nHexadecimal X: %X\nPointer:\
 %p\n", c, str, integer, integer, uns_int, hex, hex, ptr);
	ft_printf("\nReturn = %d\n", x);
	printf("\nprintf:\n");
	y = printf("Char: %c\nString: %s\nInteger: %d\nInteger:\
 %i\nUnsigned Integer: %u\nHexadecimal x: %x\nHexadecimal X: %X\nPointer:\
 %p\n", c, str, integer, integer, uns_int, hex, hex, ptr);
	printf("\nReturn = %d\n", y);
	return (0);
}
#include <stdio.h>
int main()
{
	int	str;
	
	str = ft_printf("%");
	ft_printf("return %d\n", str);
	
	str = printf("%");
	printf("retorno %d", str);
	return (0);
} */
