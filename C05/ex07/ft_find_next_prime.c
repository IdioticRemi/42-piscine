/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 02:43:02 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/11 02:43:03 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	unsigned long	i;

	i = 2;
	while (nb > 1 && i * i <= (unsigned) nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return ((nb > 1));
}

int	ft_find_next_prime(int nb)
{
	while (1)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb += (nb < 2 || nb % 2 == 0) * 1 + (nb > 1 && nb % 2 != 0) * 2;
	}
}
