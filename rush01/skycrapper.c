#include <stdio.h>
#include <stdlib.h>
#define N 8

void	ft_putchar(char c);

int	check_posibility(int matrix[N][N], int y, int x, int n)
{
	int	i;

	i = -1;
	while (++i < N)
	{
		if (matrix[y][i] == n)
			return (0);
	}
	i = -1;
	while (++i < N)
	{
		if (matrix[i][x] == n)
			return (0);
	}
	return (1);
}

void	solve(int matrix[N][N])
{
	int	x;
	int	y;
	int	n;

	y = -1;
	while (++y < N)
	{
		x = -1;
		while (++x < N)
		{
			if (matrix[y][x] == 0)
			{
				n = 0;
				while (++n <= N)
				{
					if (check_posibility(matrix, y, x, n))
					{
						matrix[y][x] = n;
						solve(matrix);
					}
				}
			//	return ;
			}
		}
	}
}

int	check_max(int len, int *rule1, int *rule2)
{
	int	i;

	i = -1;
	while (++i < len / 4)
	{
		if ((rule1[i] == N && rule2[i] != 1)
			|| (rule1[i] != 1 && rule2[i] == N)
		)
			return (0);
	}
	return (1);
}

void	print_matrix(int matrix[N][N])
{
	int	i;
	int	j;
	
	i = -1;
	while (++i < N)
	{
		j = -1;
		while (++j < N)
		{
			ft_putchar(matrix[i][j] + 48);
			ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

void	skycrapper(int matrix[N][N], int *rules, int len)
{
	int	*colup;
	int	*coldown;
	int	*rowleft;
	int	*rowright;
	int	i;

	colup = (int *)malloc(len / 4 * sizeof (int));
	coldown = (int *)malloc(len / 4 * sizeof (int));
	rowleft = (int *)malloc(len / 4 * sizeof (int));
	rowright = (int *)malloc(len / 4 * sizeof (int));
	i = -1;
	while (++i < len)
	{
		if (i < len / 4)
			colup[i % (len / 4)] = rules[i];
		else if (i < len / 4 * 2)
			coldown[i % (len / 4)] = rules[i];
		else if (i < len / 4 * 3)
			rowleft[i % (len / 4)] = rules[i];
		else
			rowright[i % (len / 4)] = rules[i];
	}
//	if (check_max(len, colup, coldown)
//		&& check_max(len, rowleft, rowright)
//	)
		solve(matrix);
	print_matrix(matrix);
	i = -1;
	while (++i < 11)
		printf("%d ", colup[i]);
}
