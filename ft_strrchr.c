/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 17:53:15 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/01/12 18:34:02 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	if ((char)c == '\0')
	{
		return ((char *)s + i);
	}
	else
	{
		while (i >= 0)
		{
			if ((char)c == s[i])
			{
				return ((char *)s + i);
			}
			i--;
		}
		return (NULL);
	}
}
