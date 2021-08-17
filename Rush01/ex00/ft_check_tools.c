/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 10:17:16 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/15 10:17:17 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_height_col(char **grid, int x, int delta)
{
	int	y;
	int	max;
	int	vmax;
	int	height;

	y = (delta > 0) * 0 + (delta <= 0) * (4 - 1);
	max = (delta > 0) * 4 + (delta <= 0) * -1;
	vmax = 0;
	height = 0;
	while (y != max)
	{
		if (!grid[y][x])
			return (0);
		if (grid[y][x] > vmax)
		{
			vmax = grid[y][x];
			height++;
		}
		y += delta;
	}
	return (height);
}

int	ft_height_row(char **grid, int y, int delta)
{
	int	x;
	int	max;
	int	vmax;
	int	height;

	x = (delta > 0) * 0 + (delta <= 0) * (4 - 1);
	max = (delta > 0) * 4 + (delta <= 0) * -1;
	vmax = 0;
	height = 0;
	while (x != max)
	{
		if (grid[y][x] > vmax)
		{
			vmax = grid[y][x];
			height++;
		}
		x += delta;
	}
	return (height);
}

int	ft_is_duplicate(char **grid, int x, int y)
{
	int	i;

	if (!grid[y][x])
		return (0);
	i = y;
	while (i--)
		if (grid[y][x] == grid[i][x])
			return (1);
	i = y;
	while (++i < 4)
		if (grid[y][x] == grid[i][x])
			return (1);
	i = x;
	while (i--)
		if (grid[y][x] == grid[y][i])
			return (1);
	i = x;
	while (++i < 4)
		if (grid[y][x] == grid[y][i])
			return (1);
	return (0);
}
