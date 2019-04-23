/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junwkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 22:39:08 by junwkim           #+#    #+#             */
/*   Updated: 2018/12/10 21:01:43 by junwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	long	tmp;
	int		len;

	tmp = n;
	tmp = (n > 0) ? tmp : -tmp;
	len = (n > 0) ? 0 : 1;
	while (tmp)
	{
		tmp = tmp / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	long	tmp;
	int		len;
	char	*rt;

	tmp = n;
	tmp = (n > 0) ? tmp : -tmp;
	len = ft_numlen(n);
	rt = (char *)malloc(sizeof(char) * (len + 1));
	if (!rt)
		return (NULL);
	rt[0] = '\0';
	rt[len--] = '\0';
	while (tmp > 0)
	{
		rt[len--] = tmp % 10 + '0';
		tmp = tmp / 10;
	}
	if (rt[0] == '\0' && n == 0)
		rt[0] = '0';
	else if (rt[0] == '\0')
		rt[0] = '-';
	return (rt);
}
