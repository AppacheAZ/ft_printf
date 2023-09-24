/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcoalv <marcoalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:15:58 by marcoalv          #+#    #+#             */
/*   Updated: 2023/09/24 21:11:11 by marcoalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h> /// BORRAR MEMBRILLO

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			printed_chars;

	va_start(args, format);
	printed_chars = ft_formats(format, args);
	va_end(args);
	return (printed_chars);
}

int main(void)
{
    int myft;
    int real;
    char *str = "hola";
    
    myft = ft_printf("myft: Hol%c %s %p %d%i %u %x %X %%\n", 'a', "mundo", str, 4, 2, -42, 31, 232988557);
    real = printf("real: Hol%c %s %p %d%i %u %x %X %%\n", 'a', "mundo", str, 4, 2, -42, 31, 232988557);

    printf("\nmyft: %d\nreal: %d\n", myft, real);
    return (0);
}