/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 19:05:23 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/08 19:05:24 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strln(const char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	l;

	i = 0;
	j = 0;
	l = ft_strln(dest);
	if (size < 1)
		return ((int) ft_strln(src));
	while (dest[i] != '\0' && i < size)
		i++;
	while (src[j] != '\0' && i < size - 1)
		dest[i++] = src[j++];
	if (size >= l)
		dest[i] = '\0';
	if (size < ft_strln(dest))
		return ((int)(ft_strln(src) + size));
	else
		return ((int)(ft_strln(src) + l));
}
