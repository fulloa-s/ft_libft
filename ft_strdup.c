/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 16:17:51 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/01/13 16:49:52 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	x;
	char	*ptr;

	x = ft_strlen(s1) + 1;
	if (!(ptr = (char *)malloc(sizeof(char) * x)))
		return (NULL);
	ft_memcpy(ptr, s1, x);
	return (ptr);
}
