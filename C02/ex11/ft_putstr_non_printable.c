/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 14:40:44 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/08 14:40:46 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_printable2(char *c)
{
	if (*c < ' ' || *c > '~')
		return (0);
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(unsigned char c)
{
	ft_putchar('\\');
	if (c / 16 <= 9)
		ft_putchar((c / 16) + '0');
	else
		ft_putchar((c / 16) + 'a' - 10);
	if (c % 16 <= 9)
		ft_putchar((c % 16) + '0');
	else
		ft_putchar((c % 16) + 'a' - 10);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (!ft_is_printable2(str))
			ft_puthex(*str);
		else
			ft_putchar(*str);
		str++;
	}
}
