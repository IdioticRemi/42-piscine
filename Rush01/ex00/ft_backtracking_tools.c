/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtracking_tools.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 10:55:22 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/15 10:55:25 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int	ft_is_valid_value(char **grid, int x, int y)
{
	if (ft_is_duplicate(grid, x, y)
		|| ft_height_col(grid, x, 1) > grid[x][4]
		|| (y == 4 - 1
			&& ft_height_col(grid, x, -1) != grid[x][4 + 1])
		|| ft_height_row(grid, y, 1) > grid[y][4 + 2]
		|| (x == 4 - 1
			&& ft_height_row(grid, y, -1) != grid[y][4 + 3]))
		return (0);
	return (1);
}

int	ft_backtracking(char **grid, int n)
{
	int	i;
	int	x;
	int	y;

	if (n == 4 * 4)
		return (1);
	i = 0;
	x = n % 4;
	y = n / 4;
	while (++i <= 4)
	{
		grid[y][x] = i;
		if (ft_is_valid_value(grid, x, y))
		{
			if (ft_backtracking(grid, n + 1))
				return (1);
			grid[y][x] = 0;
		}
	}
	grid[y][x] = 0;
	return (0);
}

int	ft_solve(char **grid)
{
	int	i;

	i = -1;
	while (++i < 4)
		if (grid[i][4] + grid[i][4 + 1] > 4 + 1
			|| grid[i][4 + 2] + grid[i][4 + 3] > 4 + 1)
			return (0);
	return (ft_backtracking(grid, 0));
}
