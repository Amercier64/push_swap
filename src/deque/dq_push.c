#include "deque.h"

int		dq_push_front(t_deque	*dq, int	elem)
{
	assert(dq); // DON'T FORGET TO REMOVE ME BEFORE LAST PUSH !!!
	if (dq_is_full(dq))
		return (1);
	cb_set(&dq->cb, dq->head, elem);
	dq->head = cb_get_next_index(&dq->cb, dq->head);
	dq->count++;
	return (0);
}

int		dq_push_back(t_deque	*dq, int	elem)
{
	assert(dq); // DON'T FORGET TO REMOVE ME BEFORE LAST PUSH !!!
	if (dq_is_full(dq))
		return (1);
	dq->tail = cb_get_prev_index(&dq->cb, dq->tail);
	cb_set(&dq->cb, dq->tail, elem);
	dq->count++;
	return (0);
}
