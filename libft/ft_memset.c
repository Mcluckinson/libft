/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuriko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 19:44:54 by cyuriko           #+#    #+#             */
/*   Updated: 2019/04/24 14:24:38 by cyuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char cc;
	unsigned char *dest;

	dest = str;
	cc = (unsigned char)c;
	while (n-- != 0)
	{
		dest[n] = cc;
	}
	return (dest);
}
