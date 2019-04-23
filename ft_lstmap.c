/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junwkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 15:39:41 by junwkim           #+#    #+#             */
/*   Updated: 2018/12/10 16:39:35 by junwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *tmp;
	t_list *rt;

	if (!lst)
		return (NULL);
	tmp = f(lst);
	rt = ft_lstnew(tmp->content, tmp->content_size);
	if (!rt)
		return (NULL);
	rt->next = ft_lstmap(lst->next, f);
	return (rt);
}
