/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuriko <cyuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 17:53:31 by cyuriko           #+#    #+#             */
/*   Updated: 2019/05/05 14:18:14 by cyuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		countdigits(int n)
{
	size_t	i;
	int		digit;

	digit = 0;
	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n != 0)
	{
		if ((n - digit) % 10 != 0)
			digit++;
		else
		{
			i++;
			n = (n - digit) / 10;
			digit = 0;
		}
	}
	return (i);
}

static	int		capturedigits(int n)
{
	int digit;

	digit = 0;
	while ((n - digit) % 10 != 0)
		digit++;
	return (digit);
}

char			*ft_itoa(int n)
{
	char	*result;
	int		len;

	len = countdigits(n);
	result = (char*)malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	if (n < 0)
	{
		n = n * -1;
		result[0] = '-';
	}
	result[len] = '\0';
	len--;
	if (n == 0)
		result[0] = 0 + '0';
	while (n != 0)
	{
		result[len] = capturedigits(n) + '0';
		n = (n - capturedigits(n)) / 10;
		len--;
	}
	return (result);
}
