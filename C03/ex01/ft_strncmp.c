/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dghazary <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 21:13:51 by dghazary          #+#    #+#             */
/*   Updated: 2021/11/01 21:13:53 by dghazary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;
	int				d;

	c = 0;
	d = 0;
	while ((c < n) && !d && (s1[c] != '\0') && (s2[c] != '\0'))
	{
		d = (unsigned char)s1[c] - (unsigned char)s2[c];
		c++;
	}
	if (c < n && !d && (s1[c] == '\0' || s2[c] == '\0'))
		d = (unsigned char)s1[c] - (unsigned char)s2[c];
	return (d);
}
