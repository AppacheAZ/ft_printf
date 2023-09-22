#include "printf.h"

unsigned long	ft_strlen(const char *s)
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

	n = ft_strlen(s);
	i = 0;
	while (n--)
		write(fd, &s[i++], 1);
    return (i);
}