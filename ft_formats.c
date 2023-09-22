/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formats.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcoalv <marcoalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:35:24 by marcoalv          #+#    #+#             */
/*   Updated: 2023/09/20 15:15:39 by marcoalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_formats(const char *c, va_list args)
{
    int printed_chars;

    printed_chars = 0;
    while (*c)
    {
        if (*c == '%')
        {
            c++;
            if (*c == 'c')
                printed_chars += ft_putchar(va_arg(args, int), 1);
            else if (*c == 's')
                printed_chars += ft_putstr(va_arg(args, char *), 1);
            else if (*c == 'd' || *c == 'i')
                printed_chars += ft_putnbr(va_arg(args, int), 1);
            else if (*c == '%')
                printed_chars += ft_putchar('%', 1);
        }
        else
            printed_chars += ft_putchar(*c, 1);
        c++;
    }
    return (printed_chars);
}