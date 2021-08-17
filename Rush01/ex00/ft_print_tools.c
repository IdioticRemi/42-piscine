/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tools.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 10:55:42 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/15 10:55:43 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"
#include <unistd.h>

void	ft_print_grid(char **grid)
{
	int	x;
	int	y;

	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			ft_putchar(grid[y][x] + '0');
			if (++x < 4)
				ft_putchar(' ');
		}
		ft_putchar('\n');
		y++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int	ft_puterror(void)
{
	ft_putstr("Error\n");
	return (1);
}
