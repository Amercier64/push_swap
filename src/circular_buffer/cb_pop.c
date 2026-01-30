#include "circular_buffer.h"

int		cb_pop_back(t_circular_buffer	*cb, int	*elem)
{
	if (!cb || cb_is_empty(*cb))
		return (1);
	*elem = cb->val[cb->tail];
	cb->tail = (cb->tail + 1) % cb->capacity;
	cb->count--;
	return (0);
}

int		cb_pop_front(t_circular_buffer	*cb, int	*elem)
{
	if (!cb || cb_is_empty(*cb))
		return (1);
	cb->head = (cb->head - 1 + cb->capacity) % cb->capacity;
	*elem = cb->val[cb->head];
	cb->count--;
	return (0);
}
