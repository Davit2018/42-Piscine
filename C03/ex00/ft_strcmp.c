/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dghazary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 21:01:41 by dghazary          #+#    #+#             */
/*   Updated: 2021/11/01 21:17:39 by dghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	x;

	x = 0;
	while ((s1[x] == s2[x]) && (s1[x] != '\0') && (s2[x] != '\0'))
		x++;
	return (s1[x] - s2[x]);
}
