/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuriko <cyuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 12:07:09 by cyuriko           #+#    #+#             */
/*   Updated: 2019/05/27 16:41:32 by cyuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t		gls(char *src)
{
	size_t	size;

	if (!src)
		return (0);
	size = 0;
	while (src[size] != '\n' && src[size] != '\0' && src[size])
		size++;
	return (size);
}

static	int			check_line(char *tempest)
{
	size_t i;

	i = 0;
	if (!tempest)
		return (0);
	while (tempest[i])
	{
		if (tempest[i] == '\n' || tempest[i] == '\0')
			return (2);
		i++;
	}
	if (i > 0)
		return (1);
	return (0);
}

static	char		*ft_strnjoin(char const *s1, char const *s2, size_t tempest)
{
	char	*result;
	size_t	len;

	len = tempest + ft_strlen(s1);
	if (!(result = (char*)malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (*s1)
		*result++ = *s1++;
	while (*s2 && tempest > 0)
	{
		*result++ = *s2++;
		tempest--;
	}
	*result = '\0';
	return (result - len);
}

static	char		*get_line(char *tmp, char *buff, size_t tempest)
{
	char	*tmp2;
	char	*result;

	if (!tmp)
		result = ft_strsub(buff, 0, tempest);
	else
	{
		tmp2 = ft_strnjoin(tmp, buff, tempest);
		free(tmp);
		result = ft_strsub(tmp2, 0, ft_strlen(tmp2));
		free(tmp2);
	}
	return (result);
}

int					get_next_line(const int fd, char **line)
{
	static char	*next;
	char		*tmp;
	int			tempest;
	char		buff[BUFF_SIZE];

	tempest = BUFF_SIZE;
	if (!(tmp = NULL) && (fd < 0 || BUFF_SIZE < 1))
		return (-1);
	if (next && (tmp = ft_strsub(next, 0, ft_strlen(next))))
		ft_strdel(&next);
	while (check_line(tmp) != 2 && tempest == BUFF_SIZE)
	{
		if ((tempest = read(fd, buff, BUFF_SIZE)) && tempest == -1)
			return (-1);
		if (tempest != 0)
			tmp = get_line(tmp, buff, tempest);
	}
	if ((*line = ft_strsub(tmp, 0, gls(tmp))) && check_line(tmp))
		next = ft_strsub(tmp, gls(tmp) + 1, ft_strlen(tmp) - gls(tmp) - 1);
	free(tmp);
	if (!gls(*line) && tempest == 0)
		return (0);
	return (1);
}
