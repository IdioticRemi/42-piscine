/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 14:31:30 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/05 14:44:13 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	j = 0;
	while (j < size - 1)
	{
		i = 0;
		while (i < size - j - 1)
		{
			if (*(tab + i) > *(tab + i + 1))
			{
				temp = *(tab + i);
				*(tab + i) = *(tab + i + 1);
				*(tab + i + 1) = temp;
			}
			i++;
		}
		j++;
	}
}
