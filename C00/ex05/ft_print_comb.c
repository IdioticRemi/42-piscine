/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 19:30:14 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/04 20:06:05 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	verif(int nbr[3])
{
	if (nbr[0] < nbr[1] && nbr[1] < nbr[2])
	{
		ft_putchar(48 + nbr[0]);
		ft_putchar(48 + nbr[1]);
		ft_putchar(48 + nbr[2]);
		if (nbr[0] < 7)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb(void)
{
	int	nbr[3];

	nbr[0] = 0;
	nbr[1] = 0;
	nbr[2] = 0;
	while (nbr[0] <= 9)
	{
		while (nbr[1]++ < 9)
		{
			while (nbr[2]++ < 9)
			{
				verif(nbr);
			}
			nbr[2] = 0;
		}
		nbr[0]++;
		nbr[1] = 0;
	}
}
