/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 01:45:47 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/11 01:45:48 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	if (power == 0)
		return (1);
	return ((nb == 0 && power == 0) + !(nb == 0 && power == 0) * nb);
}
