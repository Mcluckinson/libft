/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuriko <cyuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 17:36:26 by cyuriko           #+#    #+#             */
/*   Updated: 2019/05/07 17:59:53 by cyuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lstcount(t_list *alst)
{
	size_t	l;

	l = 0;
	if (!alst)
		return (0);
	while (alst)
	{
		l++;
		alst = alst->next;
	}
	return (l);
}
