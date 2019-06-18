/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuriko <cyuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 16:48:54 by cyuriko           #+#    #+#             */
/*   Updated: 2019/05/16 11:05:54 by cyuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	slen(char const *s1, char const *s2)
{
	size_t len;

	len = ft_strlen(s1) + ft_strlen(s2);
	return (len);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		len;

	if (!s1 || !s2)
		return (NULL);
	len = slen(s1, s2) + 1;
	result = (char*)malloc((len) * sizeof(char));
	if (result == NULL)
		return (NULL);
	while (*s1)
	{
		*result = *s1;
		result++;
		s1++;
	}
	while (*s2)
	{
		*result = *s2;
		result++;
		s2++;
	}
	*result = '\0';
	while (len-- > 1)
		result--;
	return (result);
}
