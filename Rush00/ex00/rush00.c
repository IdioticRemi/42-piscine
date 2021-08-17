/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 15:00:48 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/07 15:00:50 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#define HAUT_GAUCHE 'o'
#define HAUT_DROITE 'o'
#define BAS_GAUCHE 'o'
#define BAS_DROITE 'o'
#define HORIZONTAL '-'
#define VERTICAL '|'
#define CENTRE ' '

void	ft_putchar(char c);

void	check(int x, int y, int X, int Y)
{
	if (X == 1 && Y == 1)
		ft_putchar(HAUT_GAUCHE);
	else if (X == x && Y == 1)
		ft_putchar(HAUT_DROITE);
	else if (X == 1 && Y == y)
		ft_putchar(BAS_GAUCHE);
	else if (X == x && Y == y)
		ft_putchar(BAS_DROITE);
	else if (Y == y || Y == 1)
		ft_putchar(HORIZONTAL);
	else if (X == x || X == 1)
		ft_putchar(VERTICAL);
	else
		ft_putchar(CENTRE);
}

void	rush(int x, int y)
{
	int	X;
	int	Y;

	if (x < 0 || y < 0)
		return ;
	Y = 0;
	while (Y++ < y)
	{
		X = 0;
		while (X++ < x)
		{
			check(x, y, X, Y);
		}
		ft_putchar('\n');
	}
}
