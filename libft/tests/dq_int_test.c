#include "deque.h"
#include <stdio.h>
#include <assert.h>

int main() // REMOVE THIS FILE FROM GIT REPO BEFORE CORRECTION
{
	t_deque dq;
	size_t	size;
	int		elem;

	size = 6;
	elem = 42;
	assert(dq_init(&dq, size, sizeof(int)) == 0);
	printf("dq_init: OK\n");
	assert(dq_is_empty(&dq));
	printf("dq_is_empty: OK\n");
	while(!dq_is_full(&dq))
	{
		dq_push_front(&dq, &elem);
		elem *= -1;
		dq_push_back(&dq, &elem);
		elem *= -1;
		elem += 100;
	}
	while(!dq_is_empty(&dq))
	{
		printf("dq.count = %zu", dq.count);
		dq_pop_front(&dq, &elem);
		printf("elem front: %d\n", elem);
	}
	elem = 10;
	while(!dq_is_full(&dq))
	{
		dq_push_front(&dq, &elem);
		elem++;
	}
	while(!dq_is_empty(&dq))
	{
		printf("dq.count = %zu", dq.count);
		dq_pop_back(&dq, &elem);
		printf("elem front: %d\n", elem);
	}
	dq_clear(&dq);
}
