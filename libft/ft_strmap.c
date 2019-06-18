/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuriko <cyuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 14:57:42 by cyuriko           #+#    #+#             */
/*   Updated: 2019/05/04 11:27:25 by cyuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*fresh;
	size_t	len;
	size_t	i;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	i = 0;
	fresh = (char*)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (fresh == NULL)
		return (NULL);
	while (len > i)
	{
		fresh[i] = f(*s);
		s++;
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}
