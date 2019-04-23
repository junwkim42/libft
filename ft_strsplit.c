/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junwkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 21:45:26 by junwkim           #+#    #+#             */
/*   Updated: 2018/12/12 16:47:17 by junwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_strsplit_real(char const *s, char c)
{
	int		flag;
	size_t	i;
	size_t	j;
	size_t	save;
	char	**table;

	table = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!table)
		return (NULL);
	i = -1;
	j = 0;
	flag = 0;
	while (s[++i])
	{
		if (s[i] != c && flag == 0)
			save = i;
		else if (s[i] == c && flag == 1)
			table[j++] = ft_strsub(s, save, i - save);
		flag = (s[i] == c) ? 0 : 1;
	}
	if (flag)
		table[j++] = ft_strsub(s, save, i - save);
	table[j] = NULL;
	return (table);
}

char		**ft_strsplit(char const *s, char c)
{
	if (!s)
		return (NULL);
	else
		return (ft_strsplit_real(s, c));
}
