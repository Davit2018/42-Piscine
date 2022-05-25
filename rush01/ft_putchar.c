#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

int	ft_get_len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
