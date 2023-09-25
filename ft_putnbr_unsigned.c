/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcoalv <marcoalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:17:50 by marcoalv          #+#    #+#             */
/*   Updated: 2023/09/25 21:23:21 by marcoalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int n, int fd)
{
	char	c;
	int		i;

	c = '0';
	i = 0;
	if (n >= 0 && n <= 9)
	{
		c = n + '0';
		i += write(fd, &c, 1);
		if (i < 0)
			return (-1);
	}
	else
	{
		i += ft_putnbr_unsigned(n / 10, fd);
		if (i < 0)
			return (-1);
		c = (n % 10) + '0';
		i += write(fd, &c, 1);
		if (i < 0)
			return (-1);
	}
	return (i);
}
