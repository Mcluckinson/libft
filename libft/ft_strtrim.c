/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuriko <cyuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 17:36:04 by cyuriko           #+#    #+#             */
/*   Updated: 2019/05/04 11:27:25 by cyuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	checklenwwsps(char const *s)
{
	int len;

	if (!s)
		return (0);
	len = 0;
	while (*s && (*s == ' ' || *s == '\t' || *s == '\n'))
		s++;
	while (*s)
	{
		s++;
		len++;
	}
	if (*s == '\0')
		s--;
	while (*s && (*s == ' ' || *s == '\t' || *s == '\n'))
	{
		s--;
		len--;
	}
	return (len);
}

char		*ft_strtrim(char const *s)
{
	int		i;
	int		ii;
	char	*copy;

	if (!s)
		return (NULL);
	i = checklenwwsps(s);
	if (i < 0)
		i = 0;
	ii = i;
	copy = (char*)malloc((i + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	while (*s && (*s == ' ' || *s == '\t' || *s == '\n'))
		s++;
	while (*s && i > 0)
	{
		*copy = *s;
		i--;
		copy++;
		s++;
	}
	*copy = '\0';
	copy = copy - ii;
	return (copy);
}
