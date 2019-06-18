/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuriko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 15:19:42 by cyuriko           #+#    #+#             */
/*   Updated: 2019/05/06 11:44:51 by cyuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *str1, const void *str2, int c, size_t n)
{
	unsigned char		*str3;
	unsigned char const	*str4;
	unsigned char		t;

	t = (unsigned)c;
	str3 = (unsigned char*)str1;
	str4 = (unsigned const char*)str2;
	while (n != 0)
	{
		if (*str4 == t)
		{
			*str3++ = *str4++;
			return (str3);
		}
		*str3++ = *str4++;
		n--;
	}
	return (NULL);
}
