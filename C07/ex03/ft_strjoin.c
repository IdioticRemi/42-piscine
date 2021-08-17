/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 16:13:04 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/16 16:13:05 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*res;

	res = dest;
	while (*src != '\0')
		*dest++ = *src++;
	*dest = *src;
	return (res);
}

unsigned int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char			*str;
	unsigned int	global_size;
	unsigned int	offset;
	unsigned int	i;

	global_size = (size - 1) * ft_strlen(sep) + 1;
	i = -1;
	while (++i < (unsigned) size)
		global_size += ft_strlen(strs[i]);
	str = malloc(global_size * sizeof(char));
	if (!str)
		return (NULL);
	i = -1;
	offset = 0;
	while (++i < (unsigned) size)
	{
		ft_strcpy(str + offset, strs[i]);
		offset += ft_strlen(strs[i]);
		if (i < (unsigned) size - 1)
		{
			ft_strcpy(str + offset, sep);
			offset += ft_strlen(sep);
		}
	}
	str[offset] = '\0';
	return (str);
}