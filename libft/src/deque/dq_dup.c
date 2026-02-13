/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dq_dup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 19:04:29 by amercier          #+#    #+#             */
/*   Updated: 2026/02/13 20:57:17 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deque.h"

int	dq_dup(t_deque *dest, const t_deque *src)
{
	int	err;

	err = dq_init(dest, cb_get_capacity(&src->cb), cb_get_elem_size(&src->cb));
	assert(err == 0);
	if (!err)
	{
		cb_cpy(&dest->cb, &src->cb);
		dest->head = src->head;
		dest->tail = src->tail;
		dest->count = src->count;
	}
	return (err);
}
