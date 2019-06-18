/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuriko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 22:45:07 by cyuriko           #+#    #+#             */
/*   Updated: 2019/05/05 17:11:52 by cyuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (*s)
	{
		s++;
	}
	if (*s == (char)c)
		return ((char*)s);
	s--;
	while (*s && i > 0)
	{
		if (*s == (char)c)
			return ((char*)s);
		s--;
		i--;
	}
	return (NULL);
}
