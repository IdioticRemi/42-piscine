/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 14:04:09 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/06 14:31:22 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_numeric2(char *c)
{
	if (*c < '0' || *c > '9')
	{
		return (0);
	}
	return (1);
}

int	ft_is_alpha2(char *c)
{
	if (!((*c >= 'A' && *c <= 'Z') || (*c >= 'a' && *c <= 'z')))
	{
		return (0);
	}
	return (1);
}

void	ft_lower(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
	{
		*c = *c + 32;
	}
}

void	ft_upper(char *c)
{
	if (*c >= 'a' && *c <= 'z')
	{
		*c = *c - 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	ft_upper(str);
	while (*(str + i) != '\0')
	{
		if (!(ft_is_alpha2(str + i - 1) || ft_is_numeric2(str + i - 1)))
			ft_upper(str + i);
		else if (ft_is_alpha2(str + i - 1) || ft_is_numeric2(str + i - 1))
			ft_lower(str + i);
		i++;
	}
	return (str);
}
