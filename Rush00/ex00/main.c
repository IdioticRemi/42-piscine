/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 15:00:42 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/07 15:00:43 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	rush(unsigned int x, unsigned int y);

int	atoi(const char *str)
{
	int	sign;
	int	x;

	sign = 1;
	x = 0;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		x = x * 10 + (*str - '0');
		str++;
	}
	return (x * sign);
}

int	main(int argc, char *argv[])
{
	if (argc < 3)
		return (1);
	rush(atoi(argv[1]), atoi(argv[2]));
}
