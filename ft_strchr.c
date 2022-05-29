/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 17:22:09 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/01/12 17:51:02 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;

	if ((char)c == '\0')
	{
		i = ft_strlen(s);
		return ((char *)s + i);
	}
	else
	{
		i = 0;
		while (s[i])
		{
			if (s[i] == (char)c)
				return ((char *)s + i);
			i++;
		}
		return (NULL);
	}
}
