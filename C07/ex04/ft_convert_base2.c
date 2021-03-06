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

unsigned int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	strev(char *str, int offset_of_center)
{
	int		len;
	int		i;
	char	temp;

	len = (int) ft_strlen(str);
	i = 0;
	while (i < len / 2)
	{
		temp = str[i + offset_of_center];
		str[i + offset_of_center] = str[len - i - 1];
		str[len - i - 1] = temp;
		i++;
	}
}

void	ft_encodenbr_base(int nbr, char *base, char *nb_dest)
{
	unsigned int	lenbase;
	unsigned int	nbr_unsigned;
	int				i;

	i = 0;
	if (nbr < 0)
	{
		nb_dest[i++] = '-';
		nbr_unsigned = (unsigned int)(-1 * nbr);
	}
	else
		nbr_unsigned = (unsigned int)nbr;
	lenbase = ft_strlen(base);
	if (nbr_unsigned == 0)
		nb_dest[i++] = *(base);
	while (nbr_unsigned > 0)
	{
		nb_dest[i++] = *(base + (nbr_unsigned % lenbase));
		nbr_unsigned /= lenbase;
	}
	nb_dest[i] = '\0';
	strev(nb_dest, nbr < 0);
}
