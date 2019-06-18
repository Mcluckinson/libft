/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuriko <cyuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 19:37:08 by cyuriko           #+#    #+#             */
/*   Updated: 2019/05/07 17:31:03 by cyuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					minus;
	unsigned long int	result;

	minus = 1;
	result = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus = -1;
		str++;
	}
	while (*str != '\0' && *str >= 48 && *str <= 57)
	{
		if ((result > 922337203685477580 || (result == 922337203685477580
		&& *str - '0' > 7)) && minus == 1)
			return (-1);
		else if ((result > 922337203685477580 || (result == 922337203685477580
		&& (*str - '0') > 8)) && minus == -1)
			return (0);
		result = (result * 10) + (*str - '0');
		str++;
	}
	return (result * minus);
}
