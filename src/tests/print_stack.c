/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 18:12:10 by amercier          #+#    #+#             */
/*   Updated: 2026/02/13 21:06:06 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_push_swap.h"

void	print_stack(t_deque *stack)
{
	t_stack_elem	elem;
	t_deque			dup;

	assert(dq_dup(&dup, stack) == 0);
	printf("[");
	if (dq_is_empty(&dup))
	{
		printf("]\n");
		dq_clear(&dup);
		return ;
	}
	while (dup.count > 1)
	{
		dq_pop_front(&dup, &elem);
		printf("%d, ", elem.val);
	}
	dq_pop_front(&dup, &elem);
	printf("%d]\n", elem.val);
	dq_clear(&dup);
}
