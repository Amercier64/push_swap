/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cb_at.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 15:28:15 by amercier          #+#    #+#             */
/*   Updated: 2026/02/02 15:28:22 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "circular_buffer.h"

int	cb_at(t_circular_buffer *cb, size_t index)
{
	assert(cb); // DON'T FORGET TO REMOVE ME BEFORE LAST PUSH !!!
	assert(index < cb->capacity); // DON'T FORGET TO REMOVE ME BEFORE LAST PUSH !!!
	return (cb->val[index]);
}
