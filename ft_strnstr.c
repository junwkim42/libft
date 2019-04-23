/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junwkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 21:22:21 by junwkim           #+#    #+#             */
/*   Updated: 2018/12/10 18:25:18 by junwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *ndl, size_t len)
{
	int i;
	int j;

	i = 0;
	if (*ndl == '\0')
		return ((char *)hay);
	while (hay[i] && i < (int)len)
	{
		j = 0;
		while (hay[i + j] == ndl[j] && i + j < (int)len && ndl[j])
		{
			j++;
		}
		if (ndl[j] == '\0')
			return ((char *)&hay[i]);
		i++;
	}
	return (NULL);
}
