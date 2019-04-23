/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junwkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 16:44:44 by junwkim           #+#    #+#             */
/*   Updated: 2018/12/12 16:45:31 by junwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcount(char const *s, char c)
{
	int		count;
	int		flag;

	count = 0;
	flag = 0;
	if (!s)
		return (count);
	while (*s)
	{
		if (*s == c)
			flag = 0;
		else if (*s != c && flag == 0)
		{
			flag = 1;
			count++;
		}
		s++;
	}
	return (count);
}
