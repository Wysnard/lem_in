/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstdel_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/29 22:06:14 by mdeville          #+#    #+#             */
/*   Updated: 2018/01/17 15:53:24 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dlst.h"
#include <stdlib.h>

void	ft_dlstdel_back(t_dlist **alst, void (*del)(void *, size_t))
{
	t_dlist	*tmp;

	if (!alst || !del)
		return ;
	while (*alst)
	{
		tmp = (*alst)->prev;
		(*del)((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = tmp;
	}
}
