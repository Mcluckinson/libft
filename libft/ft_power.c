/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuriko <cyuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 13:56:05 by cyuriko           #+#    #+#             */
/*   Updated: 2019/05/06 14:08:00 by cyuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	ft_power(int i, int power)
{
	long long	result;

	result = 1;
	if (power == 0)
		return (1);
	if (i == 0)
		return (0);
	while (power > 0)
	{
		result = result * i;
		power--;
	}
	return (result);
}
