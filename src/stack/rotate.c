/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 16:40:05 by amercier          #+#    #+#             */
/*   Updated: 2026/02/14 01:32:40 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int	rotate(t_deque *stack, t_dyn_str *action_list, const char *action)
{
	int				err;
	t_stack_elem	elem;

	err = dq_pop_front(stack, &elem);
	if (!err)
	{
		dq_push_back(stack, &elem);
		if (action_list && action)
			str_append(action_list, action);
	}
	return (err);
}

int	reverse_rotate(t_deque *stack, t_dyn_str *action_list, const char *action)
{
	int				err;
	t_stack_elem	elem;

	err = dq_pop_back(stack, &elem);
	if (!err)
	{
		dq_push_front(stack, &elem);
		if (action_list && action)
			str_append(action_list, action);
	}
	return (err);
}
