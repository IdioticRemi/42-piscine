/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 17:42:14 by tjolivea          #+#    #+#             */
/*   Updated: 2021/08/08 17:42:15 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (((unsigned char) *s1 - (unsigned char) *s2) > 0)
		return (1);
	else if (((unsigned char) *s1 - (unsigned char) *s2) < 0)
		return (-1);
	return (0);
}
