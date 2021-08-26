/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 08:45:13 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/25 09:03:32 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
int	ft_any(char **tab, int(*f)(char *))
{
	int	i;

	i = -1;
	while (tab[++i])
		if (f(tab[i]))
			return (1);
	return (0);
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
//	tab[1] = "Sah";
//	tab[2] = "";
//	tab[3] = "Moew?";
//	tab[4] = 0;
//
//	printf("%d\t", ft_any(tab, &op));
//}