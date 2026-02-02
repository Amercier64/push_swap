#include "circular_buffer.h"

int		cb_init(t_circular_buffer	*cb, size_t	capacity)
{
	if (!cb || !capacity)
		return (1);
	cb->val = malloc(capacity * sizeof(int));
	if (!cb->val)
		return (1);
	ft_memset(cb->val, 0, sizeof(int) * capacity);
	cb->capacity = capacity;
	return (0);
}

size_t	cb_get_capacity(const t_circular_buffer	*cb)
{
	assert(cb); // DON'T FORGET TO REMOVE ME BEFORE LAST PUSH !!!
	return (cb->capacity);
}

void	cb_destroy(t_circular_buffer	*cb)
{
	if (!cb || !cb->val)
		return ;
	free(cb->val);
	cb->val = NULL;
	cb->capacity = 0;
}
