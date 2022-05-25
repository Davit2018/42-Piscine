/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dghazary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 21:40:15 by dghazary          #+#    #+#             */
/*   Updated: 2021/11/01 21:40:16 by dghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	y;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		y = 0;
		while (str[i + y] == to_find[y] && str[i + y] != '\0')
		{
			if (to_find[y + 1] == '\0')
				return (&str[i]);
			y++;
		}
		i++;
	}
	return (0);
}
