/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuriko <cyuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 18:02:22 by cyuriko           #+#    #+#             */
/*   Updated: 2019/05/07 18:15:44 by cyuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstfind(t_list **list, void const *content)
{
	if (!list)
		return (NULL);
	while (*list)
	{
		if (!(ft_memcmp((*list)->content, content, (*list)->content_size)))
			return (*list);
		else
			*list = (*list)->next;
	}
	return (NULL);
}
