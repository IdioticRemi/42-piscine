/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 09:21:06 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/25 11:51:58 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
int	ft_croissant(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = -1;
	while (++i < length - 1)
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
	return (1);
}

int	ft_decroissant(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = -1;
	while (++i < length - 1)
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	if (ft_croissant(tab, length, f) || ft_decroissant(tab, length, f))
		return (1);
	return (0);
}

//#include <printf.h>
//#include <stdlib.h>
//
//int op(int x, int y)
//{
//	return (x - y);
//}
//
//int main(void)
//{
//	int l = 5;
//	int *tab = malloc(l * sizeof(int));
//
//	tab[0] = 0;
//	tab[1] = 1;
//	tab[2] = 1;
//	tab[3] = 1;
//	tab[4] = 1;
//
//	printf("%d\t", ft_is_sort(tab, 1, &op));
//}