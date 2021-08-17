/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 19:05:17 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/08 19:05:18 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char			*d;

	i = 0;
	d = dest;
	while (*dest)
		dest++;
	while (*src != '\0' && i < n)
	{
		*dest++ = *src++;
		i++;
	}
	*dest = '\0';
	return (d);
}
