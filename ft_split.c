/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 14:31:02 by fulloa-s          #+#    #+#             */
/*   Updated: 2022/05/29 16:58:01 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	numbwords(char const *s, char c)
{
	unsigned int i;
	unsigned int k;

	i = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			k += 1;
		}
		i++;
	}
	return (k);
}

unsigned int	numbletter(char const *s, char c)
{
	unsigned int i;
	unsigned int k;

	i = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			k++;
			if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
				return (k);
		}
		i++;
	}
	return (i);
}

char			**mallocstring(char **str,
		char const *s, char c, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	unsigned int	nl;

	i = 0;
	j = 0;
	while (i < nb)
	{
		while (s[j] == c)
			j++;
		nl = numbletter(s + j, c);
		if (!(str[i] = (char *)malloc(sizeof(char) * (nl + 1))))
			return (NULL);
		k = 0;
		while (k < nl)
		{
			str[i][k] = s[j];
			k++;
			j++;
		}
		str[i][k] = '\0';
		i++;
	}
	return (str);
}

char			**ft_split(char const *s, char c)
{
	char			**str;
	unsigned int	nb;

	if (!s)
		return (NULL);
	nb = numbwords(s, c);
	if (!(str = (char **)malloc(sizeof(char *) * ((nb + 1)))))
		return (NULL);
	str[nb] = (NULL);
	mallocstring(str, s, c, nb);
	return (str);
}
