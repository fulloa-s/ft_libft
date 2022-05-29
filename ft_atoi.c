/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 14:05:58 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/01/14 14:01:44 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoinumb(const char *str, long int i, long int sign)
{
	long int number;
	long int k;

	number = 0;
	k = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = (number * 10) + str[i] - 48;
		i++;
		k++;
	}
	if (k > 13)
	{
		if (sign == -1)
			return (0);
		return (-1);
	}
	return (number * sign);
}

int	ft_atoi(const char *str)
{
	long int	i;
	long int	sign;
	int			res;

	i = 0;
	sign = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	res = ft_atoinumb(str, i, sign);
	return (res);
}
