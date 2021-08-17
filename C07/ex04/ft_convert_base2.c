/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 15:27:01 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/17 15:27:02 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *str);

int	ft_isnbr(char c, char *base)
{
	while (*base)
	{
		if (*base == c)
			return (1);
		base++;
	}
	return (0);
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

int	ft_nbrlen(int number, const char *base)
{
	long	nbr;
	int		length;
	int		base_length;

	nbr = (long) number * ((number < 0) * -1 + (number >= 0) * 1);
	base_length = ft_strlen(base);
	length = 0;
	while (nbr >= base_length)
	{
		++length;
		nbr /= base_length;
	}
	return (length + 1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	x;
	int	sign;

	x = 0;
	sign = 1;
	while (!ft_isnbr(*(str), base))
	{
		sign *= ((*str == '+') * 1) + ((*str == '-') * -1);
		str++;
	}
	while (ft_isnbr(*str, base))
	{
		x = x * ft_strlen(base) + ft_index(*str, base);
		str++;
	}
	return (sign * x);
}

int	ft_cnv_fb10(int nbr, char *base, char *nbrfin, int index)
{
	unsigned int	nb;
	unsigned int	base_len;

	base_len = ft_strlen(base);
	if (nbr < 0)
	{
		nbrfin[0] = '-';
		index++;
		nb = nbr * -1;
	}
	else
		nb = nbr;
	if (nb >= base_len)
		ft_cnv_fb10(nb / base_len, base, nbrfin, index - 1);
	nbrfin[index - 1] = base[nb % base_len];
	return (index);
}
