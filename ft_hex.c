/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcoalv <marcoalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 16:25:46 by marcoalv          #+#    #+#             */
/*   Updated: 2023/09/22 20:36:32 by marcoalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	aux;

	i = 0;
	j = 0;
	while (str[i] != '\0')
		i++;
	i--;
	while (j < i)
	{
		aux = str[j];
		str[j] = str[i];
		str[i] = aux;
		j++;
		i--;
	}
	return (str);
}

static int	ft_atoi_hex(unsigned int number, char *mod)
{
	int				i;
	char			*str;
	int				pos;
	unsigned int	n;

	n = number;
	pos = 0;
	i = 0;
	str = (char *)malloc(sizeof(char) * (number / 16) + 1);
	pos = n % 16;
	str[i] = mod[pos];
	i++;
	while (n / 16 != 0)
	{
		pos = n / 16;
		if (pos > 15)
			pos = pos % 16;
		str[i] = mod[pos];
		n = n / 16;
		i++;
	}
	str = ft_strrev(str);
	write(1, str, i);
	free(str);
	return (i);
}

int	ft_hex(unsigned int n, int fd, const char *mod)
{
	int		printed_chars;
	char	*hex_upper;
	char	*hex_lower;

	printed_chars = 0;
	hex_upper = "0123456789ABCDEF";
	hex_lower = "0123456789abcdef";
	if (*mod == 'x')
		printed_chars += ft_atoi_hex(n, hex_lower);
	else if (*mod == 'X')
		printed_chars += ft_atoi_hex(n, hex_upper);
	return (printed_chars);
}
