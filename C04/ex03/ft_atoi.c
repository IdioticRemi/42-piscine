/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 10:54:57 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/10 10:54:58 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	return (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ');
}

int	ft_isnbr(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	x;
	int	sign;

	x = 0;
	sign = 1;
	while (*str && ft_isspace(*str))
		str++;
	while (!ft_isnbr(*(str)))
	{
		sign *= ((*str == '+') * 1) + ((*str == '-') * -1);
		str++;
	}
	while (*str && ft_isnbr(*str))
		x = x * 10 + (*str++ - '0');
	return (sign * x);
}
