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
#include <printf.h>

int	ft_cnv_fb10(int nbr, char *base, char *nbrfin, int index);
int	ft_atoi_base(char *str, char *base);
int	ft_nbrlen(int number, const char *base);

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	base_is_valid(char *base)
{
	int	i;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (*base)
	{
		i = 0;
		while (base[i++])
			if (*base == base[i] || base[i] == '-' || base[i] == '+')
				return (0);
		base++;
	}
	return (1);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*nbrfin;
	int		nbr_int;
	int		last;

	if (!nbr || !base_is_valid(base_from) || !base_is_valid(base_to))
		return (NULL);
	while (*nbr && (*nbr == '\t' || *nbr == '\n' || *nbr == '\v'
			|| *nbr == '\f' || *nbr == '\r' || *nbr == ' '))
		nbr++;
	nbr_int = ft_atoi_base(nbr, base_from);
	nbrfin = malloc(ft_nbrlen(nbr_int, base_to) * sizeof(char));
	last = ft_cnv_fb10(nbr_int, base_to, nbrfin, ft_nbrlen(nbr_int, base_to));
	nbrfin[last] = '\0';
	return (nbrfin);
}
