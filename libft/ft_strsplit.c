/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuriko <cyuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 12:33:23 by cyuriko           #+#    #+#             */
/*   Updated: 2019/05/05 13:56:29 by cyuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	sizecount(const char *s, char c)
{
	size_t	word_len;

	word_len = 0;
	while (*s != c && *s != '\0')
	{
		word_len++;
		s++;
	}
	word_len++;
	return (word_len);
}

static	size_t	wordcount(const char *s, char c)
{
	size_t	word;
	int		flag;

	flag = 0;
	word = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else if (*s != c && flag == 0)
		{
			flag = 1;
			while (*s != c && *s)
			{
				s++;
			}
			if (*s == c || !*s)
			{
				word++;
				flag = 0;
			}
		}
	}
	word++;
	return (word);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	counter;

	i = 0;
	if (!s || !(result = (char**)malloc((wordcount(s, c)) * sizeof(char*))))
		return (NULL);
	while (*s)
	{
		if (*s != c && !(counter = 0))
		{
			if (!(result[i] = (char*)malloc((sizecount(s, c)) * sizeof(char))))
			{
				ft_delarr((void**)result);
				return (NULL);
			}
			while (*s != c && *s)
				result[i][counter++] = *s++;
			result[i++][counter] = '\0';
		}
		else
			s++;
	}
	result[i] = NULL;
	return (result);
}
