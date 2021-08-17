/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 10:25:22 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/10 10:25:23 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	char	*s;

	s = str;
	while (*str)
		str++;
	return ((int)(str - s));
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}
