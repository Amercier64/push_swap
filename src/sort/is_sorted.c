/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 01:34:24 by amercier          #+#    #+#             */
/*   Updated: 2026/02/14 02:43:37 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	is_sorted(t_deque *stack)
{

	bool			is_sorted;
	size_t			counter;
	t_stack_elem	elem; 

	counter = 0;
	is_sorted = true;
	while(counter < stack->count)
	{
		dq_peek_front(stack, &elem);
		is_sorted = is_sorted && (counter == elem.rank);
		rotate(stack, NULL, NULL);
		counter++;
	}
	return (is_sorted);
}
