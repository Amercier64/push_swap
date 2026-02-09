/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dq_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:05:11 by amercier          #+#    #+#             */
/*   Updated: 2026/02/09 15:51:05 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deque.h"

int	dq_push_front(t_deque *dq, void *elem)
{
	assert(dq); // DON'T FORGET TO REMOVE ME BEFORE LAST PUSH !!!
	assert(elem); // REMOVE ME
	if (dq_is_full(dq))
		return (1);
	cb_set(&dq->cb, dq->head, elem);
	dq->head = cb_get_next_index(&dq->cb, dq->head);
	dq->count++;
	return (0);
}

int	dq_push_back(t_deque *dq, void *elem)
{
	assert(dq); // DON'T FORGET TO REMOVE ME BEFORE LAST PUSH !!!
	assert(elem); // REMOVE ME
	if (dq_is_full(dq))
		return (1);
	dq->tail = cb_get_prev_index(&dq->cb, dq->tail);
	cb_set(&dq->cb, dq->tail, elem);
	dq->count++;
	return (0);
}
