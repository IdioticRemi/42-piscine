/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 09:06:22 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/25 09:06:22 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
int	ft_count_if(char **tab, int length, int(*f)(char *))
{
	int	i;
	int	c;

	i = -1;
	c = 0;
	while (++i < length)
		if (f(tab[i]))
			c++;
	return (c);
}

//#include <printf.h>
//#include <stdlib.h>
//#include <string.h>
//
//int op(char *str)
//{
//	return (strlen(str) == 0);
//}
//
//int main(void)
//{
//	int l = 5;
//	char **tab = malloc(l * sizeof(char *));
//
//	tab[0] = "Sheeesh";
//	tab[1] = "";
//	tab[2] = "";
//	tab[3] = "Moew?";
//	tab[4] = "test";
//
//	printf("%d\t", ft_count_if(tab, l, &op));
//}