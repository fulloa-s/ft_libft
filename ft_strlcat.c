/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 16:06:33 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/01/14 15:34:53 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t size_dst;
	size_t size_src;
	size_t i;

	i = 0;
	size_dst = ft_strlen(dst);
	size_src = ft_strlen(src);
	if (dstsize <= size_dst)
	{
		return (dstsize + size_src);
	}
	else
	{
		while ((size_dst + i) < dstsize - 1 && src[i])
		{
			dst[size_dst + i] = src[i];
			i++;
		}
		dst[size_dst + i] = '\0';
		return (size_src + size_dst);
	}
}
