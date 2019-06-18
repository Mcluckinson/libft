/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuriko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 14:02:57 by cyuriko           #+#    #+#             */
/*   Updated: 2019/05/06 13:40:38 by cyuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	unsigned char		*str3;
	unsigned char const *str4;

	if (!str1 && !str2)
		return (NULL);
	str3 = str1;
	str4 = str2;
	while (n != 0)
	{
		*str3++ = *str4++;
		n--;
	}
	return (str1);
}
