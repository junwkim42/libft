/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junwkim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 23:12:39 by junwkim           #+#    #+#             */
/*   Updated: 2018/12/06 23:14:38 by junwkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	size_t i;

	i = ft_strlen(s);
	write(fd, s, i);
	write(fd, "\n", 1);
}
