#include "circular_buffer.h"

int		cb_init(t_circular_buffer	*cb, size_t capacity)
{
	if (!cb || !capacity)
		return (1);
	cb->val = malloc(capacity * sizeof(int));
	if (!cb->val)
		return (1);
	cb->capacity = capacity;
	cb->head = 0;
	cb->tail = 0;
	cb->count = 0;
	ft_memset(cb->val, 0, sizeof(int) * capacity);
	return (0);
}

bool	cb_is_empty(t_circular_buffer cb)
{
	return (cb.count == 0);
}

bool	cb_is_full(t_circular_buffer cb)
{
	return (cb.count == cb.capacity);
}
