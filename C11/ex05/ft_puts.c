/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 10:02:47 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/25 10:02:52 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

typedef char *	t_str;

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(t_str str)
{
	while (*str)
		ft_putchar(*(str++));
}

int	ft_puterr(t_str str)
{
	ft_putstr(str);
	return (0);
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
