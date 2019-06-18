/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuriko <cyuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 13:41:01 by cyuriko           #+#    #+#             */
/*   Updated: 2019/05/05 17:44:28 by cyuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *fresh;

	if (!(fresh = ft_memalloc((size + 1) * sizeof(char)))
	|| ((size + 1) < size))
		return (NULL);
	ft_memset(fresh, '\0', size + 1);
	return (fresh);
}
