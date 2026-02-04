/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:05:13 by amercier          #+#    #+#             */
/*   Updated: 2026/02/04 19:10:35 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deque.h"

int	dq_init(t_deque *dq, size_t capacity)
{
	int	err;

	dq->head = 0;
	dq->tail = 0;
	dq->count = 0;
	err = cb_init(&dq->cb, capacity);
	return (err);
}

bool	dq_is_empty(t_deque *dq)
{
	assert(dq); // DON'T FORGET TO REMOVE ME BEFORE LAST PUSH !!!
	return (dq->count == 0);
}

bool	dq_is_full(t_deque *dq)
{
	assert(dq); // DON'T FORGET TO REMOVE ME BEFORE LAST PUSH !!!
	return (dq->count >= cb_get_capacity(&dq->cb));
}

void	dq_clear(t_deque *dq)
{
	if (!dq)
		return ;
	cb_destroy(&dq->cb);
}
