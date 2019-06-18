/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuriko <cyuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 16:34:28 by cyuriko           #+#    #+#             */
/*   Updated: 2019/05/04 11:27:25 by cyuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*result;
	int		counter;

	if (!s)
		return (NULL);
	counter = (int)len;
	result = (char*)malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	while (*s && start > 0)
	{
		s++;
		start--;
	}
	while (*s && len > 0)
	{
		*result = *s;
		result++;
		s++;
		len--;
	}
	*result = '\0';
	while (counter-- > 0)
		result--;
	return (result);
}
