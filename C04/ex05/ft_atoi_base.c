/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 22:13:00 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/10 22:13:01 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	char	*s;

	s = str;
	while (*str)
		str++;
	return ((int)(str - s));
}

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
