/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dghazary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 23:13:09 by dghazary          #+#    #+#             */
/*   Updated: 2021/10/31 23:14:39 by dghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (str[x] != '\0')
	{
		if (y == 0 && (str[x] >= 'a' && str[x] <= 'z'))
		{
			str[x] -= 'a' - 'A';
			y++;
		}
		else if (y > 0 && (str[x] >= 'A' && str[x] <= 'Z'))
			str[x] += 'a' - 'A';
		else if ((str[x] < '0') || (str[x] > '9' && str[x] < 'A')
			|| (str[x] > 'Z' && str[x] < 'a') || (str[x] > 'z'))
			y = 0;
		else
			y++;
		x++;
	}
	return (str);
}
