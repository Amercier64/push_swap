/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dq_pop.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:05:09 by amercier          #+#    #+#             */
/*   Updated: 2026/02/09 16:50:30 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deque.h"

int	dq_pop_front(t_deque *dq, void *elem)
{
	assert(dq); // DON'T FORGET TO REMOVE ME BEFORE LAST PUSH !!!
	assert(elem); // REMOVE ME
	if (dq_is_empty(dq))
		return (1);
	dq->head = cb_get_prev_index(&dq->cb, dq->head);
	ft_memcpy(elem, cb_at(&dq->cb, dq->head), cb_get_elem_size(&dq->cb));
	dq->count--;
	return (0);
}

int	dq_pop_back(t_deque *dq, void *elem)
{
	assert(dq); // DON'T FORGET TO REMOVE ME BEFORE LAST PUSH !!!
	assert(elem); // REMOVE ME
	if (dq_is_empty(dq))
		return (1);
	ft_memcpy(elem, cb_at(&dq->cb, dq->tail), cb_get_elem_size(&dq->cb));
	dq->tail = cb_get_next_index(&dq->cb, dq->tail);
	dq->count--;
	return (0);
}
