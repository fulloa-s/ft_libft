/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 12:27:32 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/01/12 13:26:32 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	uc;

	uc = c;
	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == uc)
		{
			return ((unsigned char *)s + i);
		}
		i++;
	}
	return (NULL);
}
