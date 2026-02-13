/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_append.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 14:26:00 by amercier          #+#    #+#             */
/*   Updated: 2026/02/04 21:52:03 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dyn_str.h"

int	str_append(t_dyn_str *dest, const char *src)
{
	int		err;
	size_t	needed;

	assert(dest && src); // REMOVE ME
	err = 0;
	needed = dest->len + ft_strlen(src);
	if (needed >= dest->size)
		err = str_reserve(dest, needed);
	if (!err)
		dest->len = ft_strlcat(dest->val, src, dest->size);
	else
		return (1);
	return (0);
}
