/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 10:18:10 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/15 10:18:11 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH_H
# define FT_RUSH_H

// Print Tools (ft_print_tools.c)
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_puterror(void);
void	ft_print_grid(char **grid);

// Size & Arg parsing (ft_parse_tools.c)
int		ft_parse_arg_size(char *str);

// Grid creation & destruction (ft_grid_tools.c)
char	**ft_init_grid(char *str);
void	ft_free_grid(char **grid);

// Backtracking & Solving (ft_backtracking_tools.c)
int		ft_solve(char **grid);

// Grid verification (ft_check_tools.c)
int		ft_height_col(char **grid, int x, int delta);
int		ft_height_row(char **grid, int y, int delta);
int		ft_is_duplicate(char **grid, int x, int y);

#endif
