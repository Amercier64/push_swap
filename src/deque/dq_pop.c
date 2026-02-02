#include "circular_buffer.h"

int		dq_pop_front(t_circular_buffer	*dq, int	*elem)
{
	assert(dq); // DON'T FORGET TO REMOVE ME BEFORE LAST PUSH !!!
	if (dq_is_empty(dq))
		return (1);
	dq->head = cb_get_prev(&dq->cb, dq->head);
	*elem = cb_at(&dq->cb, dq->head);
	dq->count--;
	return (0);
}

int		dq_pop_back(t_circular_buffer	*dq, int	*elem)
{
	assert(dq); // DON'T FORGET TO REMOVE ME BEFORE LAST PUSH !!!
	if (dq_is_empty(dq))
		return (1);
	*elem = cb_at(&dq->cb, dq->tail);
	dq->tail = cb_get_prev(&dq->cb, dq->tail);
	dq->count--;
	return (0);
}
