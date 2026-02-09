/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cb_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 15:31:35 by amercier          #+#    #+#             */
/*   Updated: 2026/02/09 16:11:30 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "circular_buffer.h"
#include <stdio.h>
#include <assert.h>

void	print_arr(int	*arr, size_t size);
void	print_cb(t_circular_buffer *cb);

int main() // REMOVE THIS FILE FROM GIT REPO BEFORE CORRECTION
{
	t_circular_buffer	cb;
	size_t				index;
	size_t				size;
	int					elem;

	size = 10;
	assert(cb_init(&cb, size, sizeof(int)) == 0);
	printf("cb_init: OK\n");
	assert(cb_get_capacity(&cb) == size);
	printf("cb_get_capacity: OK\n");
	index = 0;
	while(1)
	{
		elem = index + 10;
		cb_set(&cb, index, &elem);
		index = cb_get_next_index(&cb, index);
		if (index == 0)
			break;
	}
	print_arr(cb.val, size);
	print_cb(&cb);
	index = size - 1;
	while(1)
	{
		elem = index + 20;
		cb_set(&cb, index, &elem);
		index = cb_get_prev_index(&cb, index);
		if (index == size - 1)
			break;
	}
	print_arr(cb.val, size);
	print_cb(&cb);
	cb_destroy(&cb);
}

void	print_cb(t_circular_buffer *cb)
{
	int	*val;

	printf("[");
	for (size_t i = 0; i < cb->capacity - 1; i++)
	{
		val = cb_at(cb, i);
		printf("%d, ", *val);
	}
	val = cb_at(cb, cb->capacity - 1);
	printf("%d]\n", *val);
}
void	print_arr(int	*arr, size_t size)
{
	printf("[");
	for (size_t i = 0; i < size - 1; i++)
	{
		printf("%d, ", arr[i]);
	}
	printf("%d]\n", arr[size - 1]);
}
