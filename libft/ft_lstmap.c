/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuriko <cyuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 13:35:50 by cyuriko           #+#    #+#             */
/*   Updated: 2019/05/06 13:27:09 by cyuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*first;
	t_list	*new;

	if (!lst || !f)
		return (NULL);
	new = ft_lstnew(NULL, 0);
	if (!new)
		return (NULL);
	if (!(new = f(lst)))
		return (NULL);
	first = new;
	while (lst->next)
	{
		lst = lst->next;
		if (!(new->next = f(lst)))
		{
			ft_lstdel(&first, ft_lstdelcont);
			return (NULL);
		}
		new = new->next;
	}
	return (first);
}
