#include "circular_buffer.h"

int		cb_push_front(t_circular_buffer	*cb, int	elem)
{
	if (!cb || cb_is_full(*cb))
		return (1);
	cb->val[cb->head] = elem;
	cb->head = (cb->head + 1) % cb->capacity;
	cb->count++;
	return (0);
}

int		cb_push_back(t_circular_buffer	*cb, int	elem)
{
	if (!cb || cb_is_full(*cb))
		return (1);
	cb->tail = (cb->tail - 1 + cb->capacity) % cb->capacity;
	cb->val[cb->tail] = elem;
	cb->count++;
	return (0);
}
