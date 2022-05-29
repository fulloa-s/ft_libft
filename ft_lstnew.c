/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 17:21:22 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/01/18 18:59:14 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *newelement;

	if (!(newelement = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	newelement->content = content;
	newelement->next = NULL;
	return (newelement);
}
