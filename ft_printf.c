/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcoalv <marcoalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:15:58 by marcoalv          #+#    #+#             */
/*   Updated: 2023/09/22 20:55:24 by marcoalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
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
    
    myft = ft_printf("myft: Hol%c %s %d%i %x %X %%\n", 'a', "mundo", 4, 2, 33, 115);
    real = printf("real: Hol%c %s %d%i %x %X %%\n", 'a', "mundo", 4, 2, 33, 115);

    printf("\nmyft: %d\nreal: %d\n", myft, real);
    return (0);
}