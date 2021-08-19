/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 15:26:53 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/17 15:26:55 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
void	ft_encodenbr_base(int nbr, char *base, char *nb_dest);

int	ft_index(char c, const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_isnbr_b(char c, char *base)
{
	while (*base)
	{
		if (*base == c)
			return (1);
		base++;
	}
	return (0);
}

int	base_is_valid(char *base)
{
	int	i;

	if (ft_strlen(base) <= 1)
		return (0);
	while (*base)
	{
		i = 0;
		while (base[i++])
			if (*base == base[i] || base[i] == '-' || base[i] == '+'
				|| base[i] == '\t' || base[i] == '\n' || base[i] == '\v'
				|| base[i] == '\f' || base[i] == '\r' || base[i] == ' ')
				return (0);
		base++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	x;
	int	sign;

	x = 0;
	sign = 1;
	if (!base_is_valid(base))
		return (0);
	while (*str && (*str == '\t' || *str == '\n' || *str == '\v'
			|| *str == '\f' || *str == '\r' || *str == ' '))
		str++;
	while (!ft_isnbr_b(*(str), base))
	{
		sign *= ((*str == '+') * 1) + ((*str == '-') * -1);
		str++;
	}
	while (ft_isnbr_b(*str, base))
	{
		x = x * ft_strlen(base) + ft_index(*str, base);
		str++;
	}
	return (sign * x);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb_int;
	char	*nb_converti;

	if (!base_is_valid(base_from) || !base_is_valid(base_to))
		return (0);
	nb_converti = malloc(64);
	nb_int = ft_atoi_base(nbr, base_from);
	ft_encodenbr_base(nb_int, base_to, nb_converti);
	return (nb_converti);
}
