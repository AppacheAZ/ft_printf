/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcoalv <marcoalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:16:41 by marcoalv          #+#    #+#             */
/*   Updated: 2023/09/25 17:30:50 by marcoalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_putstr(char *s, int fd);
int		ft_putnbr(int n, int fd);
int		ft_putchar(char c, int fd);
int		ft_formats(const char *c, va_list args);
int		ft_hex(unsigned int n, int fd, const char *mod);
int		ft_pointer(void *dir, int fd);
int		ft_putnbr_unsigned(unsigned int n, int fd);
#endif