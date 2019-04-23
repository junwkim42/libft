/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junwkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 21:31:49 by junwkim           #+#    #+#             */
/*   Updated: 2018/12/10 18:26:12 by junwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*rt;
	size_t	i;

	rt = (char *)malloc(sizeof(char) * (len + 1));
	if (!rt || !s)
		return (NULL);
	i = 0;
	while (i < len)
	{
		rt[i] = s[start + i];
		i++;
	}
	rt[i] = '\0';
	return (rt);
}
