/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuriko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 17:28:02 by cyuriko           #+#    #+#             */
/*   Updated: 2019/04/28 15:48:54 by cyuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	size_t	len;

	len = ft_strlen(src);
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = *src;
	dest = dest - len;
	return (dest);
}
