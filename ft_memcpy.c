/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junwkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 06:48:08 by junwkim           #+#    #+#             */
/*   Updated: 2018/12/11 19:01:07 by junwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*stmp;
	unsigned char	*dtmp;

	i = 0;
	stmp = (unsigned char *)src;
	dtmp = dst;
	while (i < n)
	{
		dtmp[i] = stmp[i];
		i++;
	}
	return (dst);
}
