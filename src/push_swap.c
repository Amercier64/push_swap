/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 15:17:56 by amercier          #+#    #+#             */
/*   Updated: 2026/02/14 02:33:20 by amercier         ###   ########.fr       */
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
		print_stack(&stack_a);
		if (is_sorted(&stack_a))
			printf("SORTED !\n");
		else
			printf("NOT SORTED !\n");
		printf("actions: %s\n", action_list.val);
		print_stack(&stack_a);
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
