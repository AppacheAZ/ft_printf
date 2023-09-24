/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcoalv <marcoalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:05:33 by marcoalv          #+#    #+#             */
/*   Updated: 2023/09/24 21:19:51 by marcoalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len_num(unsigned long n)
{
	int				i;
	unsigned long	aux;

	i = 0;
	aux = n;
	while (aux > 0)
	{
		aux /= 16;
		i++;
	}
	return (i);
}

static int	ft_atoi_hex_ptr(unsigned long number, int fd, char *mod)
{
	char			*str;
	int				len_num;
	unsigned long	n;

	n = number;
	len_num = ft_len_num(n);
	str = (char *)malloc(sizeof(char) * (len_num + 1));
	if (!str)
		return (0);
	str[len_num] = '\0';
	while (len_num)
	{
		len_num = len_num - 1;
		str[len_num] = mod[n % 16];
		n /= 16;
	}
	ft_putstr(str, fd);
	free(str);
	return (ft_len_num(number));
}

int	ft_hex_ptr(unsigned long n, int fd, const char *mod)
{
	int		printed_chars;
	char	*hex_upper;
	char	*hex_lower;

	printed_chars = 0;
	hex_upper = "0123456789ABCDEF";
	hex_lower = "0123456789abcdef";
	if (*mod == 'x')
		printed_chars += ft_atoi_hex_ptr(n, fd, hex_lower);
	else if (*mod == 'X')
		printed_chars += ft_atoi_hex_ptr(n, fd, hex_upper);
	return (printed_chars);
}

int	ft_pointer(void *dir, int fd)
{
	int				printed_chars;
	unsigned long	ptr_address;

	printed_chars = 0;
	if (!dir)
	{
		printed_chars += write(fd, "0x0", 3);
		return (printed_chars);
	}
	ptr_address = (unsigned long)dir;
	printed_chars += write(fd, "0x", 2);
	printed_chars += ft_hex_ptr(ptr_address, fd, "x");
	return (printed_chars);
}
