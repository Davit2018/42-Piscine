/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dghazary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 23:22:21 by dghazary          #+#    #+#             */
/*   Updated: 2021/10/31 23:22:22 by dghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	x;
	unsigned int	y;

	x = 0;
	y = 0;
	while (src[x] != '\0')
		x++;
	if (size != 0)
	{
		while (src[y] != '\0' && y < (size - 1))
		{
			dest[y] = src[y];
			y++;
		}
		dest[y] = '\0';
	}
	return (x);
}
