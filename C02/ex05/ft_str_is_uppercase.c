/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 12:16:44 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/06 13:38:18 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_uppercase(char *c)
{
	if (*c < 'A' || *c > 'Z')
	{
		return (0);
	}
	return (1);
}

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!ft_is_uppercase(str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
