/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcoalv <marcoalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:15:58 by marcoalv          #+#    #+#             */
/*   Updated: 2023/09/25 21:46:22 by marcoalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h> /// BORRAR MEMBRILLO

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

/*int main(void)
{
    int myft;
    int real;
    int myft2;
    int real2;
    char *str = "hola";
    
    myft = ft_printf("myft: Hol%c %s %p %d%i %u %x %X %%\n", 'a', "mundo", str, 4, 2, -42, 31, 232988557);
    real = printf("real: Hol%c %s %p %d%i %u %x %X %%\n", 'a', "mundo", str, 4, 2, -42, 31, 232988557);

    myft2 = ft_printf("%p", (void *)-14523);
    write(1, "\n", 1);
    real2 = printf("%p", (void *)-14523);

    printf("\nmyft: %d\nreal: %d\n", myft, real);
    printf("\nmyft: %d\nreal: %d\n", myft2, real2);

    return (0);
}*/