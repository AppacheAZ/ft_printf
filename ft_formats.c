/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formats.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcoalv <marcoalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:35:24 by marcoalv          #+#    #+#             */
/*   Updated: 2023/09/24 20:49:19 by marcoalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_sings(const char *c, va_list args)
{
	int	printed_chars;

	printed_chars = 0;
	if (*c == 'c')
		printed_chars += ft_putchar(va_arg(args, int), 1);
	else if (*c == 's')
		printed_chars += ft_putstr(va_arg(args, char *), 1);
	else if (*c == 'p')
		printed_chars += ft_pointer(va_arg(args, void *), 1);
	else if (*c == 'd' || *c == 'i')
		printed_chars += ft_putnbr(va_arg(args, int), 1);
	else if (*c == 'u')
		printed_chars += ft_putnbr(va_arg(args, unsigned int), 1);
	else if (*c == 'x' || *c == 'X')
		printed_chars += ft_hex(va_arg(args, unsigned int), 1, c);
	else if (*c == '%')
		printed_chars += ft_putchar('%', 1);
	return (printed_chars);
}

int	ft_formats(const char *c, va_list args)
{
	int	printed_chars;

	printed_chars = 0;
	while (*c)
	{
		if (*c == '%')
		{
			c++;
			printed_chars += ft_format_sings(c, args);
		}
		else
			printed_chars += ft_putchar(*c, 1);
		c++;
	}
	return (printed_chars);
}
