#include "deque.h"

int		dq_init(t_deque	*dq, size_t	capacity)
{
	int	err;

	dq->head = 0;
	dq->tail = 0;
	dq->count = 0;
	err = cb_init(&dq->cb, capacity);
	return (err);
}

bool	dq_is_empty(t_deque	*dq)
{
	return (dq->count == 0);
}

bool	dq_is_full(t_deque	*dq)
{
	return (dq->count >= cb_get_capacity(&dq->cb));
}

void	dq_clear(t_deque	*dq)
{
	cb_destroy(&dq->cb);
}
