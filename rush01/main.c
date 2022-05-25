#include <stdio.h>
#include <stdlib.h>
#define N 8

void	ft_putstr(char *str);
int	ft_get_len(char *str);
void	skycrapper(int matrix[N][N], int *rules, int len);

int	check_arguments(int	argc, char *arguments)
{
	int	len;

	if (argc != 2)
	{
		ft_putstr("ERROR\n");
		return (0);
	}
	len = (ft_get_len(arguments) + 2) / 2;
	if (N * 4 != len)
	{
		ft_putstr("ERROR\n");
		return (0);
	}
	return (len);
}

int	initialize_rules(int *rules, char *arguments)
{
	int	i;

	i = -1;
	while (arguments[++i])
	{
		if (i % 2 == 0)
		{
			if (arguments[i] - 48 <= N && arguments[i] - 48 > 0)
				rules[i / 2] = arguments[i] - 48;
			else
			{
				ft_putstr("ERROR\n");
				return (0);
			}
		}
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	*rules;
	int	matrix[N][N];
	int	len;
	int	i;
	int	j;

	i = -1;
	while (++i < N)
	{
		j = -1;
		while (++j < N)
		{
			matrix[i][j] = 0;
		}
	}
	len = check_arguments(argc, argv[1]);
	if (!len)
		return (0);
	rules = (int *)malloc(len * sizeof (int));
	if (!initialize_rules(rules, argv[1]))
		return (0);
	skycrapper(matrix, rules, len);
	return (0);
}
