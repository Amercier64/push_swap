/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   circular_buffer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 15:28:12 by amercier          #+#    #+#             */
/*   Updated: 2026/02/09 16:44:28 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "circular_buffer.h"

int	cb_init(t_circular_buffer *cb, size_t capacity, size_t elem_size)
{
	if (!cb || !capacity || !elem_size)
		return (1);
	cb->val = malloc(capacity * elem_size);
	if (!cb->val)
		return (1);
	cb->capacity = capacity;
	cb->elem_size = elem_size;
	return (0);
}

size_t	cb_get_capacity(const t_circular_buffer *cb)
{
	assert(cb); // DON'T FORGET TO REMOVE ME BEFORE LAST PUSH !!!
	return (cb->capacity);
}

size_t	cb_get_elem_size(const t_circular_buffer *cb)
{
	assert(cb); // DON'T FORGET TO REMOVE ME BEFORE LAST PUSH !!!
	return (cb->elem_size);
}

void	cb_destroy(t_circular_buffer *cb)
{
	if (!cb || !cb->val)
		return ;
	free(cb->val);
	cb->val = NULL;
	cb->capacity = 0;
}
