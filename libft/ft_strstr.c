/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuriko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 02:55:13 by cyuriko           #+#    #+#             */
/*   Updated: 2019/04/14 03:51:42 by cyuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str1, const char *str2)
{
	int i;

	i = 0;
	if (*str2 == '\0')
		return ((char*)str1);
	while (*str1)
	{
		while (*str2 && (*str1 == *str2))
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
		i = 0;
		str1++;
	}
	return (NULL);
}
