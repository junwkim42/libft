/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junwkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 14:02:47 by junwkim           #+#    #+#             */
/*   Updated: 2018/12/12 20:49:34 by junwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *rt;

	rt = (t_list *)malloc(sizeof(t_list));
	if (!rt)
		return (NULL);
	if (!content)
	{
		rt->content = NULL;
		rt->content_size = 0;
	}
	else
	{
		rt->content = malloc(content_size);
		if (!(rt->content))
		{
			free(rt);
			return (NULL);
		}
		rt->content_size = content_size;
		ft_memcpy(rt->content, content, content_size);
	}
	rt->next = NULL;
	return (rt);
}
