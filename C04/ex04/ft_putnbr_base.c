/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 13:40:26 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/10 13:40:27 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	base_is_valid(char *base)
{
	int	i;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (*base)
	{
		i = 0;
		while (base[i++])
			if (*base == base[i] || base[i] == '-' || base[i] == '+')
				return (0);
		base++;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nb, char *base)
{
	long	nbr;
	long	final[256];
	long	i;

	i = 0;
	nbr = (long)nb;
	if (base_is_valid(base))
	{
		if (nbr == 0)
			return ((void) ft_putchar(base[0]));
		if (nbr < 0)
		{
			nbr = -nbr;
			ft_putchar('-');
		}
		while (base[final[255]])
			final[255]++;
		while (nbr)
		{
			final[i++] = nbr % final[255];
			nbr = nbr / final[255];
		}
		while (--i >= 0)
			ft_putchar(base[final[i]]);
	}
}
