/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junwkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 12:08:24 by junwkim           #+#    #+#             */
/*   Updated: 2018/12/13 12:11:39 by junwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strchr_c(const char *s, int c)
{
	int count;

	count = 0;
	if (!s)
		return (count);
	while (*s)
	{
		if (*s == (char)c)
			count++;
		s++;
	}
	return (count);
}
