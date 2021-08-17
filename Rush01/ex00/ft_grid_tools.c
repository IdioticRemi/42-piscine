/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid_tools.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 10:56:34 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/15 10:56:34 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_init_grid(char *str)
{
	char	**grid;
	int		x;
	int		y;

	grid = (char **) malloc(4 * sizeof(char *));
	if (!grid)
		return (NULL);
	y = -1;
	while (++y < 4)
	{
		grid[y] = (char *) malloc((4 + 4) * sizeof(char));
		if (!grid[y])
			return (NULL);
		x = -1;
		while (++x < 4)
			grid[y][x] = 0;
		x = -1;
		while (++x < 4)
			grid[y][4 + x] = str[2 * (y + x * 4)] - '0';
	}
	return (grid);
}

void	ft_free_grid(char **grid)
{
	int	x;
	
	x = 4;
	while (x--)
		free(grid[x]);
	free(grid);
}
