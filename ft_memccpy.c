/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junwkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 08:02:43 by junwkim           #+#    #+#             */
/*   Updated: 2018/11/30 09:51:06 by junwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	while (n-- > 0)
	{
		*((unsigned char *)dst++) = *((unsigned char *)src);
		if (*((unsigned char *)src) == (unsigned char)c)
			return (dst);
		src++;
	}
	return (NULL);
}
