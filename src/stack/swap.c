/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 16:40:06 by amercier          #+#    #+#             */
/*   Updated: 2026/02/13 18:53:06 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int	swap(t_deque *stack, t_dyn_str *action_list, const char *target)
{
	int				err;
	t_stack_elem	top;
	t_stack_elem	second;

	err = dq_pop_front(stack, &top);
	if (!err)
		err = dq_pop_front(stack, &second);
	if (!err)
	{
		dq_push_front(stack, &top);
		dq_push_front(stack, &second);
		str_append(action_list, "s");
		str_append(action_list, target);
		str_append(action_list, "\n");
	}
	return (err);
}
