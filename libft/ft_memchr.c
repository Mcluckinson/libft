/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuriko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 16:57:05 by cyuriko           #+#    #+#             */
/*   Updated: 2019/04/28 15:09:19 by cyuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char const		*cs;
	unsigned char			cc;

	cc = c;
	cs = s;
	while (n != 0)
	{
		if (*cs == cc)
			return ((void*)cs);
		n--;
		cs++;
	}
	return (NULL);
}
