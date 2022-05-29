/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 14:26:50 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/01/19 17:37:21 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*newstr;
	unsigned int	i;

	i = 0;
	if (!s || !len || start >= ft_strlen(s))
		return (newstr = ft_strdup(""));
	if (!(newstr = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i < len && start <= ft_strlen(s))
	{
		newstr[i] = s[start + i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
