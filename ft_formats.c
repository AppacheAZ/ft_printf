/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formats.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcoalv <marcoalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:35:24 by marcoalv          #+#    #+#             */
/*   Updated: 2023/09/20 14:35:58 by marcoalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_formats(char c, va_list args)
{
    int printed_chars;

    printed_chars = 0;
    if (c == 'd' || c == 'i')
        printed_chars += ft_putnbr(va_arg(args, int), 1);
    else if (c == 'c')
        printed_chars += ft_putchar(va_arg(args, int), 1);
    return (printed_chars);
}