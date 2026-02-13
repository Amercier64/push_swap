/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 15:17:56 by amercier          #+#    #+#             */
/*   Updated: 2026/02/13 16:07:04 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
# include <stdio.h> // REMOVE ME !!!!!!!!!!!!!!!!!!!!!!

static void	print_error();
static void	set_to_null(t_deque *var1, t_deque *var2);

int	main(int argc, char **argv)
{
	int				err;
	t_deque			stack_a;
	t_deque			stack_b;
	t_stack_elem	elem;

	set_to_null(&stack_a, &stack_b);
	err = init_state(&stack_a, &stack_b, argc, argv);
	if (err)
		print_error();
	else
	{
		while (!dq_is_empty(&stack_a))
		{
			dq_pop_front(&stack_a, &elem);
			printf("Pop_front elem rank: %zu - val: %d\n", elem.rank, elem.val); //ME TOO !!!!!!!!!!!!!!!!!!!!
		}
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
