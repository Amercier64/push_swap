/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cb_set.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 15:28:16 by amercier          #+#    #+#             */
/*   Updated: 2026/02/09 16:17:15 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "circular_buffer.h"

void	cb_set(t_circular_buffer *cb, size_t index, void *elem)
{
	assert(cb); // DON'T FORGET TO REMOVE ME BEFORE LAST PUSH !!!
	assert(index < cb->capacity); // DON'T FORGET TO REMOVE ME BEFORE LAST PUSH !!!
	assert(elem); // REMOVE ME
	ft_memcpy(cb->val + (index * cb->elem_size), elem, cb->elem_size);
}
