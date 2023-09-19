/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcoalv <marcoalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:15:58 by marcoalv          #+#    #+#             */
/*   Updated: 2023/09/19 15:37:50 by marcoalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_printf(const char *format, ...)
{
    va_list args;
    int printed_chars;

    va_start(args, format);
    printed_chars = ft_vprintf(format, args);
    va_end(args);
    return (printed_chars);
}