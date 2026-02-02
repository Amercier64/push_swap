#include "circular_buffer.h"

int	cb_at(t_circular_buffer *cb, size_t index)
{
	assert(cb); // DON'T FORGET TO REMOVE ME BEFORE LAST PUSH !!!
	assert(index < cb->capacity); // DON'T FORGET TO REMOVE ME BEFORE LAST PUSH !!!
	return (cb->val[index]);
}
