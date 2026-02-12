/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_init_state.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 19:34:52 by amercier          #+#    #+#             */
/*   Updated: 2026/02/12 20:16:32 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init_state.h"
#include "test.h"

int	main(int argc, char **argv)
{
	t_deque			stack_a;
	t_deque			stack_b;
	t_stack_elem	elem;

	assert(init_state(&stack_a, &stack_b, argc, argv) == 0);
	while (!dq_is_empty(&stack_a))
	{
		dq_pop_front(&stack_a, &elem);
		printf("Pop_front elem rank: %zu - val: %d\n", elem.rank, elem.val);
	}
	dq_clear(&stack_a);
	dq_clear(&stack_b);
}
