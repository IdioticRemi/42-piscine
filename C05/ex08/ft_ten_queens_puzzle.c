/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queen_puzzle.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 05:20:17 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/11 05:20:19 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

int	ft_abs(int n)
{
	return ((n < 0) * -n + (n >= 0) * n);
}

void	ft_print_solved(int *ctr, const int *tab)
{
	int	i;

	i = 0;
	while (i++ < 10)
		ft_putchar('0' + tab[i - 1]);
	ft_putchar('\n');
	(*ctr)++;
}

void	ft_solve(int *ctr, int col, int *tab)
{
	int	i;
	int	j;

	if (col == 10)
		ft_print_solved(ctr, tab);
	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < col && !(tab[j] == i || ft_abs(tab[j] - i) == col - j))
			j++;
		i++;
		if (j < col)
			continue ;
		tab[col] = i - 1;
		ft_solve(ctr, col + 1, tab);
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	tab[10];
	int	ctr;

	ctr = 0;
	ft_solve(&ctr, 0, tab);
	return (ctr);
}
