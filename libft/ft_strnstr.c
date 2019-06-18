/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuriko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 17:39:47 by cyuriko           #+#    #+#             */
/*   Updated: 2019/04/24 13:54:26 by cyuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	int i;

	i = 0;
	if (*str2 == '\0')
		return ((char*)str1);
	while (*str1 && len > 0)
	{
		while (*str2 && (*str1 == *str2) && len-- > 0)
		{
			if (*str1++ == *str2++)
				i++;
		}
		if (*str2 == '\0')
		{
			str1 = str1 - i;
			return ((char*)str1);
		}
		str1 = str1 - i;
		str2 = str2 - i;
		len = len + i;
		i = 0;
		len--;
		str1++;
	}
	return (NULL);
}
