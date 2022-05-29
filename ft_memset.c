/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 11:53:58 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/01/11 15:46:19 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			x;
	unsigned char	uc;
	char			*str;

	x = 0;
	uc = c;
	str = b;
	while (x < len)
	{
		str[x] = uc;
		x++;
	}
	return (b);
}
