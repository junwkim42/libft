/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junwkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 22:02:41 by junwkim           #+#    #+#             */
/*   Updated: 2018/12/12 11:39:21 by junwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*rt;
	int		s1_len;
	int		s2_len;
	int		i;

	s1_len = (!s1) ? 0 : ft_strlen(s1);
	s2_len = (!s2) ? 0 : ft_strlen(s2);
	rt = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!rt)
		return (NULL);
	i = 0;
	if (s1)
		while (*s1)
			rt[i++] = *s1++;
	if (s2)
		while (*s2)
			rt[i++] = *s2++;
	rt[i] = '\0';
	return (rt);
}
