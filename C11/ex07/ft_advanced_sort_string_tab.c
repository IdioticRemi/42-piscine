/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 10:17:22 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/25 10:17:22 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	int		i;
	int		j;
	char	*temp;

	j = 0;
	while (tab[j] && tab[j + 1])
	{
		i = 0;
		while (tab[i] && tab[i + 1])
		{
			if (cmp(tab[i], tab[i + 1]) > 0)
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

//#include <printf.h>
//#include <stdlib.h>
//
//int	ft_strcmp(char *s1, char *s2)
//{
//	while (*s1 != '\0' && *s1 == *s2)
//	{
//		s1++;
//		s2++;
//	}
//	return ((unsigned char) *s1 - (unsigned char) *s2);
//}
//
//int main(void)
//{
//	int l = 8;
//	char **tab = malloc(l * sizeof(char *));
//
//	tab[0] = "arg";
//	tab[1] = "abk";
//	tab[2] = "bcd";
//	tab[3] = "agh";
//	tab[4] = "ab";
//	tab[5] = "abc";
//	tab[6] = "a";
//	tab[7] = 0;
//
//	ft_advanced_sort_string_tab(tab, &ft_strcmp);
//
//	for (int i = 0; tab[i]; i++)
//		printf("%s\n", tab[i]);
//}