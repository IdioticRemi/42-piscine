/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 10:30:19 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/10 10:30:21 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
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
		ft_putchar('-');
	if (a)
		ft_putnbr(a);
	ft_putchar('0' + ((nb < 0) * -b) + (nb >= 0) * b);
}
