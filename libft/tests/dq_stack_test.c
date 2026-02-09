/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dq_stack_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 16:55:18 by amercier          #+#    #+#             */
/*   Updated: 2026/02/09 17:49:17 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deque.h"
#include <assert.h>
#include <stdio.h>

typedef struct	s_stack_elem
{
	int		val;
	size_t	rank;
}	t_stack_elem;

int	main()
{
	t_deque		stack;
	t_stack_elem elem;
	size_t		size;
	size_t		i;

	size = 10;
	assert(dq_init(&stack, size, sizeof(elem)) == 0);
	printf("dq_init: OK\n");
	i = 0;
	while (!dq_is_full(&stack))
	{
		elem.rank = i + 1;
		elem.val = 42 * elem.rank;
		assert(dq_push_back(&stack, &elem) == 0);
		printf("push_back elem rank: %zu [OK]\n", elem.rank);
		i++;
	}
	while (!dq_is_empty(&stack))
	{
		assert(dq_pop_front(&stack, &elem) == 0);
		printf("Pop_front elem rank: %zu - val: %d\n", elem.rank, elem.val);
		i--;
	}
	dq_clear(&stack);
	printf("dq_clear: [OK]\n");
}
