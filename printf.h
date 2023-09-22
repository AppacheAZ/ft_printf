/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcoalv <marcoalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:16:41 by marcoalv          #+#    #+#             */
/*   Updated: 2023/09/22 21:16:03 by marcoalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
#define PRINTF_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int		ft_printf(char const *, ...);
int		ft_putstr(char *s, int fd);
int		ft_putnbr(int n, int fd);
int		ft_putchar(char c, int fd);
int		ft_formats(const char *c, va_list args);
int		ft_hex(unsigned int n, int fd, const char *mod);
/*int		ft_pointer(void *dir, 1);*/
#endif