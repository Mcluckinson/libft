/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuriko <cyuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 15:20:46 by cyuriko           #+#    #+#             */
/*   Updated: 2019/05/05 17:03:29 by cyuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*fresh;

	if (!s || !f)
		return (NULL);
	i = 0;
	fresh = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (fresh == NULL)
		return (NULL);
	while (*s)
	{
		if (!(fresh[i] = f(i, *s)))
		{
			ft_strdel(&fresh);
			return (NULL);
		}
		s++;
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}
