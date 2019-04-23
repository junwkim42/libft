/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junwkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 20:21:55 by junwkim           #+#    #+#             */
/*   Updated: 2018/12/12 10:04:56 by junwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*rt;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	rt = (char *)malloc(sizeof(char) * (i + 1));
	if (rt && s && f)
	{
		i = 0;
		while (s[i])
		{
			rt[i] = f(i, s[i]);
			i++;
		}
		rt[i] = '\0';
		return (rt);
	}
	else
		return (NULL);
}
