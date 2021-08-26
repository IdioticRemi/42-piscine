/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 10:02:46 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/25 10:03:14 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
typedef char *	t_str;

void	ft_putnbr(int nb);
int		ft_atoi(t_str str);
int		ft_puterr(t_str str);

int		ft_add(int vals[2]);
int		ft_sub(int vals[2]);
int		ft_mul(int vals[2]);
int		ft_div(int vals[2]);
int		ft_mod(int vals[2]);

int		ft_index(t_str str, char c);

int	main(int argc, t_str *argv)
{
	int	vals[2];
	int	(*f[5])(int *);

	f[0] = &ft_add;
	f[1] = &ft_sub;
	f[2] = &ft_mul;
	f[3] = &ft_div;
	f[4] = &ft_mod;
	if (argc != 4)
		return (0);
	vals[0] = ft_atoi(argv[1]);
	vals[1] = ft_atoi(argv[3]);
	if (argv[2][0] == '/' && vals[1] == 0)
		return (ft_puterr("Stop : division by zero\n"));
	if (argv[2][0] == '%' && vals[1] == 0)
		return (ft_puterr("Stop : modulo by zero\n"));
	if (ft_index("+-*/%", argv[2][0]) == -1)
		return (ft_puterr("0\n"));
	ft_putnbr(f[ft_index("+-*/%", argv[2][0])](vals));
	return (ft_puterr("\n"));
}

int	ft_index(t_str str, char c)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] == c)
			return (i);
	return (-1);
}
