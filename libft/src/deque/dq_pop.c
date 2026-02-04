/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dq_pop.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:05:09 by amercier          #+#    #+#             */
/*   Updated: 2026/02/04 19:10:35 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deque.h"

int	dq_pop_front(t_deque *dq, int *elem)
{
	assert(dq); // DON'T FORGET TO REMOVE ME BEFORE LAST PUSH !!!
	if (dq_is_empty(dq))
		return (1);
	dq->head = cb_get_prev_index(&dq->cb, dq->head);
	*elem = cb_at(&dq->cb, dq->head);
	dq->count--;
	return (0);
}

int	dq_pop_back(t_deque *dq, int *elem)
{
	assert(dq); // DON'T FORGET TO REMOVE ME BEFORE LAST PUSH !!!
	if (dq_is_empty(dq))
		return (1);
	*elem = cb_at(&dq->cb, dq->tail);
	dq->tail = cb_get_next_index(&dq->cb, dq->tail);
	dq->count--;
	return (0);
}
