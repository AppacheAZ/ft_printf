/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcoalv <marcoalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:15:58 by marcoalv          #+#    #+#             */
/*   Updated: 2023/09/26 19:13:17 by marcoalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			printed_chars;

	if (!format)
		return (-1);
	else if (format[0] == '%' && !format[1])
		return (-1);
	va_start(args, format);
	printed_chars = ft_formats(format, args);
	va_end(args);
	if (printed_chars < 0)
		return (-1);
	return (printed_chars);
}
