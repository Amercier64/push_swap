/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 16:40:04 by amercier          #+#    #+#             */
/*   Updated: 2026/02/13 17:56:01 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int	push(t_deque *dest, t_deque *src, t_dyn_str *action_list, const char *target)
{
	int				err;
	t_stack_elem	elem;

	err = dq_pop_front(src, &elem);
	if (!err)
	{
		dq_push_front(dest, &elem);
		str_append(action_list, "p");
		str_append(action_list, target);
		str_append(action_list, "\n");
	}
	return (err);
}
