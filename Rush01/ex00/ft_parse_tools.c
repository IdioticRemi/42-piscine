/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_tools.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 10:56:10 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/15 10:56:11 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_arg(char *str, int size)
{
	int	i;
	int	j;

	i = -1;
	j = size / 4;
	while (++i < size)
	{
		if (*str < '1' || *str > j + '0')
			return (0);
		str += 2;
	}
	return (j);
}

int	ft_parse_arg_size(char *str)
{
	int	size;
	int	i;

	size = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] >= '1' && str[i] <= '9')
			size++;
		else
			return (0);
		if (str[++i] == ' ' && !str[++i])
			return (0);
	}
	if (size != 16)
		return (0);
	return (ft_check_arg(str, size));
}
