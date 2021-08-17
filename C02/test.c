/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 18:56:10 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/07 18:56:12 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void			*ft_memset(void *ptr, int c, unsigned int len);

char			*ft_strcpy(char *dest, char *src);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
int				ft_str_is_alpha(char *str);
int				ft_str_is_numeric(char *str);
int				ft_str_is_lowercase(char *str);
int				ft_str_is_uppercase(char *str);
int				ft_str_is_printable(char *str);
char			*ft_strupcase(char *str);
char			*ft_strlowcase(char *str);
char			*ft_strcapitalize(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
void			ft_putstr_non_printable(char *str);

void	qua(char *a, char *b, char *d)
{
	printf("\n>>> Exercice 10 <<<\n\n");
	ft_memset(b, '\0', 50);
	printf("Input  1: %s | %s\n", &a[0], &b[0]);
	printf("Result 1: %d\n", ft_strlcpy(&b[0], &a[0], 16));
	printf("Output 1: %s | %s\n", &a[0], &b[0]);
	ft_memset(b, '\0', 50);
	printf("\n");
	printf("Input  2: %s | %s\n", &a[0], &b[0]);
	printf("Result 2: %d\n", ft_strlcpy(&b[0], &a[0], 50));
	printf("Output 2: %s | %s\n", &a[0], &b[0]);
	printf("\n>>> Exercice 11 <<<\n\n");
	printf("%s\n", &d[0]);
	ft_putstr_non_printable(&d[0]);
	printf("\n");
}

void	thi(char *a, char *b, char *d)
{
	printf("\n>>> Exercice 07 <<<\n\n");
	printf("Input  : %s\n", &a[0]);
	printf("Output : %s\n", ft_strupcase(&a[0]));
	printf("\n>>> Exercice 08 <<<\n\n");
	printf("Input  : %s\n", &a[0]);
	printf("Output : %s\n", ft_strlowcase(&a[0]));
	printf("\n>>> Exercice 09 <<<\n\n");
	printf("Input  1: %s\n", &a[0]);
	printf("Output 1: %s\n", ft_strcapitalize(&a[0]));
	printf("\n");
	printf("Input  2: %s\n", &d[0]);
	printf("Output 2: %s\n", ft_strcapitalize(&d[0]));
	qua(a, b, d);
}

void	sec(char *a, char *b, char *d)
{
	printf("Input  2: %s | %s\n", &a[0], &b[0]);
	printf("Result 2: %s\n", ft_strncpy(&b[0], &a[0], 50));
	printf("Output 2: %s | %s\n", &a[0], &b[0]);
	printf("\n>>> Exercice 02 <<<\n\n");
	printf("Input  : %s\n", &a[0]);
	printf("Output : %d\n", ft_str_is_alpha(&a[0]));
	printf("\n>>> Exercice 03 <<<\n\n");
	printf("Input  : %s\n", &a[0]);
	printf("Output : %d\n", ft_str_is_numeric(&a[0]));
	printf("\n>>> Exercice 04 <<<\n\n");
	printf("Input  : %s\n", &a[0]);
	printf("Output : %d\n", ft_str_is_lowercase(&a[0]));
	printf("\n>>> Exercice 05 <<<\n\n");
	printf("Input  : %s\n", &a[0]);
	printf("Output : %d\n", ft_str_is_uppercase(&a[0]));
	printf("\n>>> Exercice 06 <<<\n\n");
	printf("Input  : %s\n", &a[0]);
	printf("Output : %d\n", ft_str_is_printable(&a[0]));
	thi(a, b, d);
}

int	main(void)
{
	char	a[27];
	char	b[50];
	char	d[60];

	ft_strcpy(&a[0], "j'aime les lamas unijambistes\0");
	ft_strcpy(&d[0],
		"\xD3sAl, co2MenuK 4As ?/42mo\nts qu5ante-deux; cinquante+et+un\0");
	printf("\n>>> Exercice 00 <<<\n\n");
	ft_memset(&b, '\0', 50);
	printf("Input  : %s | %s\n", &a[0], &b[0]);
	ft_strcpy(&b[0], &a[0]);
	printf("Output : %s | %s\n", &a[0], &b[0]);
	printf("\n>>> Exercice 01 <<<\n\n");
	ft_memset(&b, '\0', 50);
	printf("Input  1: %s | %s\n", &a[0], &b[0]);
	printf("Result 1: %s\n", ft_strncpy(&b[0], &a[0], 16));
	printf("Output 1: %s | %s\n", &a[0], &b[0]);
	ft_memset(&b, '\0', 50);
	printf("\n");
	sec(&a[0], &b[0], &d[0]);
}
