/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dghazary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 22:07:51 by dghazary          #+#    #+#             */
/*   Updated: 2021/11/02 22:08:27 by dghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	c;
	int	b;
	int	i;

	c = 0;
	b = 1;
	i = 0;
	while ((str[c] >= '\t' && str[c] <= '\r') || str[c] == ' ')
		c++;
	while (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			b *= -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		i = (str[c] - '0') + (i * 10);
		c++;
	}
	return (i * b);
}