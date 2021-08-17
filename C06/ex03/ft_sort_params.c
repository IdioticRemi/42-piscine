/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 10:32:57 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/12 10:32:59 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char) *s1 - (unsigned char) *s2);
}

void	ft_strsort(char **tab, int len)
{
	int		i;
	int		j;
	char	*temp;

	j = 0;
	while (j < len - 1)
	{
		i = 0;
		while (i < len - j - 1)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		j++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	argv++;
	argc--;
	ft_strsort(argv, argc);
	i = 0;
	while (i < argc)
	{
		ft_putstr(argv[i++]);
		ft_putstr("\n");
	}
}
