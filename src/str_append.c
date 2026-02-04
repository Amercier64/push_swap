/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_append.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 14:26:00 by amercier          #+#    #+#             */
/*   Updated: 2026/02/04 18:37:40 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dyn_str.h"

int	str_append(t_dyn_str *dest, const char *src)
{
	size_t	new_dest_len;
	size_t	offset;
	int		err;

	assert(dest);
	new_dest_len = ft_strlcat(dest->val, src, dest->size);
	if (new_dest_len >= dest->size)
	{
		offset = new_dest_len - dest->size + 1;
		err = str_resize(dest->val, dest->size);
		if (err)
			return (1);
		err = str_append(dest, src + offset);
		if (err)
			return (1);
	}
	return (0);
}
