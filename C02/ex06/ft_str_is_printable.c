/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 13:04:57 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/06 13:54:54 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_printable(char *c)
{
	if (*c < ' ' || *c > '~')
	{
		return (0);
	}
	return (1);
}

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!ft_is_printable(str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
