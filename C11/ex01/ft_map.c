/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 08:37:11 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/25 08:37:11 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	*tmp;
	int	i;

	tmp = malloc(length * sizeof(int));
	if (!tmp)
		return (NULL);
	i = -1;
	while (++i < length)
	{
		tmp[i] = f(tab[i]);
	}
	return (tmp);
}

//#include <printf.h>
//
//int op(int x)
//{
//	return (x + 5);
//}
//
//int main(void)
//{
//	int l = 5;
//	int *tab = malloc(l * sizeof(int));
//
//	tab[0] = 0;
//	tab[1] = 1;
//	tab[2] = 2;
//	tab[3] = 3;
//	tab[4] = 4;
//
//	tab = ft_map(tab, l, &op);
//
//	for (int i = 0; i< l; i++)
//	{
//		printf("%d\t", tab[i]);
//	}
//}