/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 12:15:08 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/06 13:35:49 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_lowercase(char *c)
{
	if (*c < 'a' || *c > 'z')
	{
		return (0);
	}
	return (1);
}

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!ft_is_lowercase(str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
