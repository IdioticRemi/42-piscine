/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 12:12:12 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/06 13:33:10 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_numeric(char *c)
{
	if (*c < '0' || *c > '9')
	{
		return (0);
	}
	return (1);
}

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!ft_is_numeric(str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
