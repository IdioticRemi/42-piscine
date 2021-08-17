/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 15:46:15 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/16 15:46:16 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <printf.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (-1);
	}
	*range = malloc((max - min) * sizeof(int));
	if (!*range)
	{
		*range = NULL;
		return (-1);
	}
	i = -1;
	while (++i < max - min)
	{
		(*range)[i] = min + i;
	}
	return (i);
}
