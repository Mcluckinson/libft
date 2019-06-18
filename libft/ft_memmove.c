/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuriko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 16:54:04 by cyuriko           #+#    #+#             */
/*   Updated: 2019/05/05 17:38:35 by cyuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	unsigned char		*str3;
	unsigned char const *str4;
	size_t				len;

	if (!str1 && !str2)
		return (NULL);
	str3 = str1;
	str4 = str2;
	len = 0;
	if (str3 > str4)
	{
		while (n-- > 0)
			str3[n] = str4[n];
	}
	else
	{
		while (len < n)
		{
			str3[len] = str4[len];
			len++;
		}
	}
	return (str1);
}
