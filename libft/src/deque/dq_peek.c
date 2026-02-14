/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dq_peek.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 01:36:48 by amercier          #+#    #+#             */
/*   Updated: 2026/02/14 02:49:21 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deque.h"

int	dq_peek_front(t_deque *dq, void *elem)
{
	assert(dq != NULL && elem != NULL);

	if (dq_is_empty(dq))
		return (1);
	dq->head = cb_get_prev_index(&dq->cb, dq->head);
	ft_memcpy(elem, cb_at(&dq->cb, dq->head), cb_get_elem_size(&dq->cb));
	dq->head = cb_get_next_index(&dq->cb, dq->head);
	return (0);
}

int	dq_peek_back(t_deque *dq, void *elem)
{
	assert(dq != NULL && elem != NULL);

	if (dq_is_empty(dq))
		return (1);
	ft_memcpy(elem, cb_at(&dq->cb, dq->tail), cb_get_elem_size(&dq->cb));
	return (0);
}
