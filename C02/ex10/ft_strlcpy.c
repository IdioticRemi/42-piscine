/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 12:42:51 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/07 12:44:40 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strln(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	*ft_memcpy(void *dest, void *src, unsigned int len)
{
	char	*tempD;

	tempD = dest;
	while (len--)
		*tempD++ = *(char *) src++;
	return (dest);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	n;
	unsigned int	len;

	if (!dest || !src)
		return (0);
	n = ft_strln(src);
	if (size)
	{
		if (n >= size)
			len = size - 1;
		else
			len = n;
		ft_memcpy(dest, src, len);
		dest[len] = '\0';
	}
	return (n);
}
