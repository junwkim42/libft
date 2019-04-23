/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junwkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 14:46:43 by junwkim           #+#    #+#             */
/*   Updated: 2018/12/10 16:39:17 by junwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *rm;

	if (!alst || !(*alst))
		return ;
	rm = *alst;
	del(rm->content, rm->content_size);
	ft_lstdel(&(rm->next), del);
	free(rm);
	*alst = NULL;
}
