/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 08:37:26 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/25 10:21:08 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
void	ft_foreach(int *tab, int length, void(*f)(int))
{
	long	i;

	i = -1;
	while (++i < length)
		f(tab[i]);
}

//#include <unistd.h>
//#include <stdlib.h>
//
//void	ft_putchar(char c)
//{
//	write(1, &c, 1);
//}
//
//void	ft_putnbr(int nb)
//{
//	int	a;
//	int	b;
//
//	a = nb / 10;
//	b = nb % 10;
//	if (nb < 0 && !a)
//		ft_putchar('-');
//	if (a)
//		ft_putnbr(a);
//	ft_putchar('0' + ((nb < 0) * -b) + (nb >= 0) * b);
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
//	ft_foreach(tab, l, &ft_putnbr);
//}