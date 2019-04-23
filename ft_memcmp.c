/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junwkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 10:23:28 by junwkim           #+#    #+#             */
/*   Updated: 2018/12/10 20:53:59 by junwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int rt;

	rt = 0;
	while (n-- > 0)
	{
		rt = *((unsigned char *)s1++) - *((unsigned char *)s2++);
		if (rt != 0)
			return (rt);
	}
	return (rt);
}
