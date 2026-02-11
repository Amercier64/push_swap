/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   todo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 14:13:56 by amercier          #+#    #+#             */
/*   Updated: 2026/02/10 15:55:53 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include "libft.h"
#include "dyn_str.h"

int	main(int argc, char **argv)
{
	int				err;
	bool			new_word;
	size_t			i;
	t_dyn_str		arg_list;
	t_stack_elem	new_node;
	t_deque			stack;
	size_t			wd_count;

	new_node.rank = 0;
	assert(dq_init(&stack, wd_count, sizeof(new_node)) == 0);
	i = 0;
	new_word = true;
	while (i < arg_list.len)
	{
		if (!arg_list.val[i])
			new_word = true;
		else if (new_word)
		{
			err = safe_atoi(arg_list.val + i, &new_node.val);
			assert(!err);
			assert(!dq_is_full(&stack));
			assert(dq_push_back(&stack, &new_node) == 0);
			printf("push_back node rank %zu = %d [OK]\n", new_node.rank, new_node.val);
			new_node.rank++;
			new_word = false;
		}
		i++;	
	}
	while (!dq_is_empty(&stack))
	{
		assert(dq_pop_front(&stack, &new_node) == 0);
		printf("node number %zu = %d\n", new_node.rank, new_node.val);
	}
	str_destroy(&arg_list);
	dq_clear(&stack);
}
