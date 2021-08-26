/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 10:02:44 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/25 10:02:48 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
int	ft_add(int vals[2])
{
	return (vals[0] + vals[1]);
}

int	ft_sub(int vals[2])
{
	return (vals[0] - vals[1]);
}

int	ft_mul(int vals[2])
{
	return (vals[0] * vals[1]);
}

int	ft_div(int vals[2])
{
	return (vals[0] / vals[1]);
}

int	ft_mod(int vals[2])
{
	return (vals[0] % vals[1]);
}
