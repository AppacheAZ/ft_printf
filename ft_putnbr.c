/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcoalv <marcoalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:46:11 by marcoalv          #+#    #+#             */
/*   Updated: 2023/09/20 14:03:34 by marcoalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putnbr(int n, int fd)
{
	char	c;

	c = '0';
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return (write(fd, "-2147483648", 11));
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 0 && n <= 9)
	{
		c = n + '0';
		write(fd, &c, 1);
	}
	else
	{
		ft_putnbr(n / 10, fd);
		c = (n % 10) + '0';
		write(fd, &c, 1);
	}
    return (write(fd, &c, 1));
}