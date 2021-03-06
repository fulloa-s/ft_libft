/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 12:26:11 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/01/17 20:34:09 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_nbdigit(int n)
{
	unsigned int nbdigit;

	nbdigit = 1;
	while (n > 9 || n < -9)
	{
		n = n / 10;
		nbdigit += 1;
	}
	return (nbdigit);
}

unsigned int	ft_sign(int n)
{
	unsigned int sign;

	sign = 0;
	if (n < 0)
		sign = 1;
	return (sign);
}

char			*fill(char *str, int n, unsigned int sign, unsigned int k)
{
	if (n >= 0 && n <= 9)
		str[0 + sign] = n + 48;
	str[k] = '\0';
	return (str);
}

char			*ft_itoa(int n)
{
	char			*str;
	unsigned int	nbdigit;
	unsigned int	k;
	unsigned int	sign;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = ft_sign(n);
	if (sign == 1)
		n *= -1;
	nbdigit = ft_nbdigit(n);
	if (!(str = (char *)malloc(sizeof(char) * (nbdigit + sign + 1))))
		return (NULL);
	if (sign == 1)
		str[0] = '-';
	k = nbdigit + sign;
	while (n > 9)
	{
		str[nbdigit + sign - 1] = n % 10 + 48;
		n = n / 10;
		nbdigit--;
	}
	fill(str, n, sign, k);
	return (str);
}
