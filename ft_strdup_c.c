/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junwkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 15:23:03 by junwkim           #+#    #+#             */
/*   Updated: 2018/12/20 15:56:49 by junwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup_c(const char *s1, char c)
{
	int		i;
	int		j;
	char	*buf;

	i = 0;
	while (s1[i] && s1[i] != c)
		i++;
	buf = (char *)malloc(sizeof(char) * (i + 1));
	if (!buf)
		return (NULL);
	j = 0;
	while (j < i)
	{
		buf[j] = s1[j];
		j++;
	}
	buf[j] = '\0';
	return (buf);
}
