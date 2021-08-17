/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:31:26 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/04 19:56:09 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	a;
	int	b;

	a = nb / 10;
	b = nb % 10;
	if (nb < 0 && !a)
	{
		put('-');
	}
	if (a)
	{
		ft_putnbr(a);
	}
	if (nb < 0)
	{
		put(48 - b);
	}
	else
	{
		put(48 + b);
	}
}
