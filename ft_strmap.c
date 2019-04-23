/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junwkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 20:08:04 by junwkim           #+#    #+#             */
/*   Updated: 2018/12/12 10:04:34 by junwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*rt;
	int		i;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	rt = (char *)malloc(sizeof(char) * (i + 1));
	if (rt && s && f)
	{
		i = 0;
		while (s[i])
		{
			rt[i] = f(s[i]);
			i++;
		}
		rt[i] = '\0';
		return (rt);
	}
	else
		return (NULL);
}
