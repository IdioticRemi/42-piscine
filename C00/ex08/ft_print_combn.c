/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:50:54 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/04 19:12:48 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchr(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int x)
{
	int	a;
	int	b;

	a = x / 10;
	b = x % 10;
	if (x < 0 && !a)
	{
		ft_putchr('-');
	}
	if (a)
	{
		ft_putnbr(a);
	}
	if (x < 0)
	{
		ft_putchr(48 - b);
	}
	else
	{
		ft_putchr(48 + b);
	}
}

void	ft_print_combn(int n, int y)
{
	int	x;

	x = 0;
	while (x <= 9)
	{
		if (n > 1)
		{
			ft_print_combn(n - 1, y);
		}
		else
		{
			y = 0;
			ft_putnbr(y);
			ft_putnbr(x);
			ft_putchr(*" ");
		}
		x++;
	}
}

int	main(void)
{
	ft_print_combn(2, 0);
}
