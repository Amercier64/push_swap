#include "circular_buffer.h"

void	cb_set(t_circular_buffer *cb, size_t index, int elem)
{	
	assert(cb); // DON'T FORGET TO REMOVE ME BEFORE LAST PUSH !!!
	assert(index < cb->capacity); // DON'T FORGET TO REMOVE ME BEFORE LAST PUSH !!!
	cb->val[index] = elem;
}
