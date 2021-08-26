/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 06:14:02 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/25 06:14:11 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	write_str(char **dest, char *str, int *pos)
{
	int	i;

	i = 0;
	while (str[i])
	{
		*((*dest) + (sizeof(char) * (*pos))) = str[i];
		i++;
		(*pos)++;
	}
}

int	ft_totalsize(int size, char **strs)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		count;
	int		countchar;
	int		total;
	char	*tab;

	count = 0;
	countchar = 0;
	if (size == 0)
	{
		tab = malloc(sizeof(char));
		tab[0] = '\0';
		return (tab);
	}
	total = ft_totalsize(size, strs);
	tab = malloc(sizeof(char) * (total + ft_strlen(sep) * (size - 1)) + 1);
	if (!tab)
		return (NULL);
	while (count < size - 1)
	{
		write_str(&tab, strs[count++], &countchar);
		write_str(&tab, sep, &countchar);
	}
	write_str(&tab, strs[count], &countchar);
	tab[countchar] = '\0';
	return (tab);
}
