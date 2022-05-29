/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 10:24:11 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/01/18 12:45:39 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		decimal(int n)
{
	int digit;

	digit = 1;
	while (n > 9 || n < -9)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}

int		ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

void	ft_putnbr_fd(int n, int fd)
{
	int digit;

	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	digit = decimal(n);
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	while (digit-- > 0)
	{
		ft_putchar_fd((n / (ft_recursive_power(10, digit))) + 48, fd);
		n %= ft_recursive_power(10, digit);
	}
}
