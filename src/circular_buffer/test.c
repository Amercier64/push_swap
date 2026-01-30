#include "circular_buffer.h"
#include <stdio.h>
#include <assert.h>

static void	print_cb(t_circular_buffer cb);

int main()
{
	t_circular_buffer cb;

	assert(cb_init(&cb, 10) == 0);
	print_cb(cb);
	printf("cb_is_empty(cb): %d\n", cb_is_empty(cb));
	printf("cb_is_full(cb): %d\n", cb_is_full(cb));
	for (int i = 0; i < 5; i++)
		assert(cb_push_front(&cb, i) == 0);
	print_cb(cb);
	for (int i = 5; i < 10; i++)
		assert(cb_push_front(&cb, i) == 0);
	print_cb(cb);
	printf("cb_is_empty(cb): %d\n", cb_is_empty(cb));
	printf("cb_is_full(cb): %d\n", cb_is_full(cb));
	cb_destroy(&cb);
	assert(cb_init(&cb, 10) == 0);
	print_cb(cb);
	for (int i = 0; i < 5; i++)
	{
		assert(cb_push_front(&cb, i) == 0);
		assert(cb_push_back(&cb, 9 - i) == 0);
		print_cb(cb);
	}
	printf("cb_is_empty(cb): %d\n", cb_is_empty(cb));
	printf("cb_is_full(cb): %d\n", cb_is_full(cb));
	int elem = 0;
	for (int i = 0; i < 5; i++)
	{
		assert(cb_pop_front(&cb, &elem) == 0);
		printf("%d ", elem);
		assert(cb_pop_back(&cb, &elem) == 0);
		printf("%d\n", elem);
		print_cb(cb);
	}
	printf("cb_is_empty(cb): %d\n", cb_is_empty(cb));
	printf("cb_is_full(cb): %d\n", cb_is_full(cb));
	for (int i = 0; i < 5; i++)
	{
		assert(cb_push_front(&cb,9 - i) == 0);
		assert(cb_push_back(&cb, i) == 0);
		print_cb(cb);
	}
	printf("cb_is_empty(cb): %d\n", cb_is_empty(cb));
	printf("cb_is_full(cb): %d\n", cb_is_full(cb));
	cb_destroy(&cb);
}

static void	print_cb(t_circular_buffer cb)
{
	printf("[");
	for (int i = 0; i < (int)cb.capacity - 1; i++)
		printf("%d, ", cb.val[i]);
	printf("%d]\n", cb.val[cb.capacity - 1]);
}
