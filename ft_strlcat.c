/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junwkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 16:29:42 by junwkim           #+#    #+#             */
/*   Updated: 2018/12/10 18:23:13 by junwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t d_len;
	size_t max_app;

	d_len = 0;
	max_app = 0;
	while (dst[d_len] && d_len < dstsize)
		d_len++;
	while (src[max_app] && (d_len + max_app + 1) < dstsize)
	{
		dst[d_len + max_app] = src[max_app];
		max_app++;
	}
	if (d_len < dstsize)
		dst[d_len + max_app] = '\0';
	return (d_len + ft_strlen(src));
}
