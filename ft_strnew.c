/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junwkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 10:31:03 by junwkim           #+#    #+#             */
/*   Updated: 2018/12/10 18:25:01 by junwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*p;
	size_t	i;

	p = (char *)malloc(sizeof(char) * (size + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (i < size + 1)
	{
		p[i] = '\0';
		i++;
	}
	return (p);
}
