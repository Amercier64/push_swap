/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 00:29:33 by amercier          #+#    #+#             */
/*   Updated: 2026/02/14 01:59:48 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_deque *stack_a, t_deque *stack_b, t_dyn_str *actions)
{
	if (is_sorted(stack_a))
		return ;
	else if (stack_a->count == 2)
		swap(stack_a, actions, "sa\n");
	else if (stack_a->count == 3)
		sort_3(stack_a)
}
