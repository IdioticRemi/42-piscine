/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 05:50:17 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/25 05:53:17 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_validation(char *base)
{
	int			l;
	int			x;
	char		char_to_search;

	l = ft_strlen(base);
	if (l < 2)
		return (1);
	l = 0;
	while (base[l] != '\0')
	{
		x = 1;
		char_to_search = base[l];
		if (char_to_search == '-' || char_to_search == '+')
			return (1);
		while (char_to_search != base[l + x] && base[l + x] != '\0')
			x++;
		if (base[l + x] != '\0')
			return (1);
		l++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	base_lenght;
	unsigned int	x;

	x = nbr;
	base_lenght = ft_strlen(base);
	if (ft_validation(base) == 1)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		x = -x;
	}
	if (x > base_lenght - 1)
	{
		ft_putnbr_base(x / base_lenght, base);
		x %= base_lenght;
	}
	ft_putchar(base[x]);
}
