/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cb_get_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 15:28:16 by amercier          #+#    #+#             */
/*   Updated: 2026/02/02 15:28:22 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "circular_buffer.h"

size_t		cb_get_next_index(const t_circular_buffer	*cb, size_t index)
{
	assert(cb); // DON'T FORGET TO REMOVE ME BEFORE LAST PUSH !!!
	return ((index + 1) % cb->capacity);
}

size_t		cb_get_prev_index(const t_circular_buffer	*cb, size_t index)
{
	assert(cb); // DON'T FORGET TO REMOVE ME BEFORE LAST PUSH !!!
	return ((index - 1 + cb->capacity) % cb->capacity);
}
