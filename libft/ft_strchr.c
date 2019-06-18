/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuriko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 22:35:17 by cyuriko           #+#    #+#             */
/*   Updated: 2019/05/12 14:07:31 by cyuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (c == -2147483648)
	{
		s = s + ft_strlen(s);
		return ((char*)s);
	}
	while (*s)
	{
		if (*s == (char)c)
			return ((char*)s);
		s++;
	}
	if (*s == '\0' && c == '\0')
		return ((char*)s);
	return (NULL);
}
