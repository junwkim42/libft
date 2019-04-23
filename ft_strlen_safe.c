/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_safe.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junwkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 18:55:30 by junwkim           #+#    #+#             */
/*   Updated: 2018/12/12 18:57:12 by junwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen_safe(const char *s)
{
	size_t i;

	i = 0;
	if (!s)
		return (i);
	while (*s++)
		i++;
	return (i);
}
