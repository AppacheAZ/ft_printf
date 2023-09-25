/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcoalv <marcoalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:27:08 by marcoalv          #+#    #+#             */
/*   Updated: 2023/09/25 21:43:46 by marcoalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned long	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_putstr(char *s, int fd)
{
	size_t	n;
	int		i;
	int		j;
	int		result;

	i = 0;
	j = 0;
	result = 0;
	if (!s)
	{
		result = write(fd, "(null)", 6);
		if (result < 0)
			return (-1);
		return (result);
	}
	n = ft_strlen(s);
	while (n--)
	{
		result = write(fd, &s[i++], 1);
		if (result < 0)
			return (-1);
		j += result;
	}
	return (j);
}
