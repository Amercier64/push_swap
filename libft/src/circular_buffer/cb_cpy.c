/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cb_cpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 19:15:01 by amercier          #+#    #+#             */
/*   Updated: 2026/02/13 20:55:47 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "circular_buffer.h"

void	cb_cpy(t_circular_buffer *dest, const t_circular_buffer *src)
{
	if (dest->capacity >= src->capacity && dest->elem_size == src->elem_size)
		ft_memcpy(dest->val, src->val, src->capacity * src->elem_size);
}
