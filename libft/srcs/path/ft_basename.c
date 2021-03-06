/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basename.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 16:32:22 by mdeville          #+#    #+#             */
/*   Updated: 2018/01/17 15:58:45 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_basename(char *path)
{
	size_t i;

	if (!path || !*path)
		return (path);
	i = ft_strlen(path);
	while (i > 0 && path[i] != '/')
		i -= 1;
	if (path[i] != '/')
		return (path);
	else
		return (path + i + 1);
}
