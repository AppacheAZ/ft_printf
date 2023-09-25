/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcoalv <marcoalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:25:46 by marcoalv          #+#    #+#             */
/*   Updated: 2023/09/25 21:15:38 by marcoalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len_num(unsigned int n)
{
	int				i;
	unsigned int	aux;

	i = 0;
	aux = n;
	while (aux > 0)
	{
		aux /= 16;
		i++;
	}
	return (i);
}

static int	ft_atoi_hex(unsigned int number, int fd, char *mod)
{
	char			*str;
	int				len_num;
	unsigned int	n;

	str = NULL;
	n = number;
	len_num = ft_len_num(n);
	str = (char *)malloc(sizeof(char) * (len_num + 1));
	if (!str || len_num == 0)
		return (-1);
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

int	ft_hex(unsigned int n, int fd, const char *mod)
{
	int		printed_chars;

	if (!n)
		return (write(fd, "0", 1));
	printed_chars = 0;
	if (*mod == 'x')
		printed_chars += ft_atoi_hex(n, fd, "0123456789abcdef");
	else if (*mod == 'X')
		printed_chars += ft_atoi_hex(n, fd, "0123456789ABCDEF");
	return (printed_chars);
}
