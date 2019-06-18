/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuriko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 21:07:41 by cyuriko           #+#    #+#             */
/*   Updated: 2019/05/04 11:27:25 by cyuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	ii;

	ii = ft_strlen(dest) + ft_strlen(src);
	i = ft_strlen(dest);
	if (n <= ft_strlen(dest))
		return (ft_strlen(src) + n);
	else
	{
		while (*dest)
		{
			dest++;
			n--;
		}
		while (n > 1 && *src)
		{
			*dest++ = *src++;
			n--;
			i++;
		}
	}
	*dest = '\0';
	dest = dest - i;
	return (ii);
}
