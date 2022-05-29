/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 16:57:29 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/01/15 14:27:00 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	search_beg(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	beg;
	unsigned int	j;

	i = 0;
	j = 0;
	beg = 0;
	while (set[i] && s1[j])
	{
		while (set[i] == s1[j])
		{
			j++;
			i = 0;
			beg = j;
		}
		i++;
	}
	return (beg);
}

unsigned int	search_end(char const *s1, char const *set, unsigned int beg)
{
	unsigned int len;
	unsigned int i;

	len = ft_strlen(s1);
	i = 0;
	if (len == 0)
		return (len);
	while (len - 1 > beg && set[i])
	{
		while (set[i] == s1[len - 1])
		{
			len--;
			i = 0;
		}
		i++;
	}
	return (len);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	beg;
	unsigned int	end;
	unsigned int	i;
	char			*src;

	i = 0;
	if (!s1)
		return (NULL);
	beg = search_beg(s1, set);
	end = search_end(s1, set, beg);
	if (!(src = (char *)malloc(sizeof(char) * (end - beg + 1))))
		return (NULL);
	while (beg < end)
	{
		src[i] = s1[beg];
		i++;
		beg++;
	}
	src[i] = '\0';
	return (src);
}
