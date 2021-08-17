/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 10:18:23 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/15 10:18:24 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int	main(int argc, char **argv)
{
	char	**grid;

	if (argc != 2)
		return (ft_puterror());
	if (!ft_parse_arg_size(argv[1]))
		return (ft_puterror());
	grid = ft_init_grid(argv[1]);
	if (grid)
	{
		if (ft_solve(grid))
			ft_print_grid(grid);
		else
			ft_puterror();
		ft_free_grid(grid);
	}
	else
		return (ft_puterror());
	return (0);
}
