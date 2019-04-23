/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junwkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 16:04:50 by junwkim           #+#    #+#             */
/*   Updated: 2018/12/10 18:24:11 by junwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		l;

	i = 0;
	l = ft_strlen(s1);
	while (s2[i] && i < n)
	{
		s1[l] = s2[i];
		l++;
		i++;
	}
	s1[l] = '\0';
	return (s1);
}