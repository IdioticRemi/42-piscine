/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 19:21:34 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/04 19:55:10 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	show(int nbr[])
{
	if (nbr[0] != nbr[1] && nbr[0] < nbr[1])
	{
		ft_putchar(48 + nbr[0] / 10);
		ft_putchar(48 + nbr[0] % 10);
		ft_putchar(' ');
		ft_putchar(48 + nbr[1] / 10);
		ft_putchar(48 + nbr[1] % 10);
		if (nbr[0] != 98)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb2(void)
{
	int	nbr[2];

	nbr[0] = 0;
	nbr[1] = 0;
	while (nbr[0] <= 99)
	{
		while (nbr[1] <= 99)
		{
			show(nbr);
			nbr[1]++;
		}
		nbr[0]++;
		nbr[1] = 0;
	}
}
