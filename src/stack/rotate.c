/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 16:40:05 by amercier          #+#    #+#             */
/*   Updated: 2026/02/13 18:09:28 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int	rotate(t_deque *stack, t_dyn_str *action_list, const char *target)
{
	int				err;
	t_stack_elem	elem;

	err = dq_pop_front(stack, &elem);
	if (!err)
	{
		dq_push_back(stack, &elem);
		str_append(action_list, "r");
		str_append(action_list, target);
		str_append(action_list, "\n");
	}
	return (err);
}

int	reverse_rotate(t_deque *stack, t_dyn_str *action_list, const char *target)
{
	int				err;
	t_stack_elem	elem;

	err = dq_pop_back(stack, &elem);
	if (!err)
	{
		dq_push_front(stack, &elem);
		str_append(action_list, "rr");
		str_append(action_list, target);
		str_append(action_list, "\n");
	}
	return (err);
}
