/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 08:56:03 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/01/18 19:01:38 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *ndl, size_t len)
{
	size_t i;
	size_t j;

	if (*ndl == '\0')
		return ((char *)hay);
	i = 0;
	while (*(hay + i) != '\0' && i < len)
	{
		j = 0;
		while (*(hay + i + j) == *(ndl + j))
		{
			if (*(ndl + j + 1) == '\0' && (i + j) < len)
			{
				return ((char *)hay + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
