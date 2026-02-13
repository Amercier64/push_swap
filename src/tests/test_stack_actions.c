/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 15:17:56 by amercier          #+#    #+#             */
/*   Updated: 2026/02/13 21:10:39 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
# include "test_push_swap.h" // REMOVE ME !!!!!!!!!!!!!

static void	print_error();
static void	set_to_null(t_deque *var1, t_deque *var2);

int	main(int argc, char **argv)
{
	int				err;
	t_deque			stack_a;
	t_deque			stack_b;
	t_dyn_str		action_list;

	set_to_null(&stack_a, &stack_b);
	err = init_state(&stack_a, &stack_b, argc, argv);
	if (err)
		print_error();
	else
	{
		str_init(&action_list, 64);
		printf("initial state:\n");
		print_stack(&stack_a);
		swap(&stack_a, &action_list, "a");
		printf("after swap\nactions:\n%s", action_list.val);
		print_stack(&stack_a);
		swap(&stack_a, &action_list, "a");
		printf("after swap\nactions:\n%s", action_list.val);
		print_stack(&stack_a);
		rotate(&stack_a, &action_list, "a");
		printf("after rotate\nactions:\n%s", action_list.val);
		print_stack(&stack_a);
		reverse_rotate(&stack_a, &action_list, "a");
		printf("after reverse rotate\nactions:\n%s", action_list.val);
		print_stack(&stack_a);
		push(&stack_b, &stack_a, &action_list, "b");
		printf("after push b\nactions:\n%s", action_list.val);
		print_stack(&stack_a);
		printf("stack b:\n");
		print_stack(&stack_b);
		push(&stack_a, &stack_b, &action_list, "a");
		printf("after push a\nactions:\n%s", action_list.val);
		print_stack(&stack_a);
		printf("stack b:\n");
		print_stack(&stack_b);
		free(action_list.val);
	}
	dq_clear(&stack_a);
	dq_clear(&stack_b);
	return (err);
}

static void	print_error()
{
	ft_putstr_fd("Error\n", 2);
}

static void	set_to_null(t_deque *var1, t_deque *var2)
{
	ft_memset(var1, 0, sizeof(*var1));
	ft_memset(var2, 0, sizeof(*var2));
}
