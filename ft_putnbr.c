/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcoalv <marcoalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:46:11 by marcoalv          #+#    #+#             */
/*   Updated: 2023/09/20 15:24:38 by marcoalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putnbr(int n, int fd)
{
	char	c;
    int		i;

	c = '0';
	i = 0;
	if (n == -2147483648)
	{
		i = write(fd, "-2147483648", 11);
		return (i);
	}
	else if (n < 0)
	{
		i += write(fd, "-", 1);
		n = -n;
	}
	if (n >= 0 && n <= 9)
	{
		c = n + '0';
		i += write(fd, &c, 1);
	}
	else
	{
		i += ft_putnbr(n / 10, fd);
		c = (n % 10) + '0';
		i += write(fd, &c, 1);
	}
    return (i);
}