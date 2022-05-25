/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dghazary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 17:45:49 by dghazary          #+#    #+#             */
/*   Updated: 2021/10/24 17:45:54 by dghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int a, int b)
{
	int	x;
	int	y;

	y = 1;
	while (y <= b && a > 0)
	{
		x = 1;
		while (x <= a)
		{
			if ((x == 1 && y == 1) || (x == a && y == b && x != 1 && y != 1))
				ft_putchar('A');
			else if ((x == a && y == 1) || (x == 1 && y == b))
				ft_putchar('C');
			else if ((x == 1) || (x == a) || (y == 1) || (y == b))
				ft_putchar('B');
			else
				ft_putchar(' ');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
