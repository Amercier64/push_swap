/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_state.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 12:29:13 by amercier          #+#    #+#             */
/*   Updated: 2026/02/11 18:13:20 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init_state.h"

static void	set_space_to_null(t_dyn_str *arg_list);
static int	get_arg_list(t_dyn_str *new_arg_list, int argc, char **argv);

/* Parse given args for integer list. Detects duplicate.
 * Initialise stack_a with first int of the list at the top.
 * Assign to rank their rank in ascending order.
 * Initialise stack_b to empty stack.*/
int	init_state(t_deque *stack_a, t_deque *stack_b, int argc, char argv**)
{
	int		err;
	t_dyn_str	arg_list;
	size_t		elem_count;

	err = get_arg_list(&arg_list, &elem_count, argc, argv);
	if (!(err || elem_count < 2))
		err = stack_init(stack_a, arg_list, elem_count);
	if (!err)
		err = dq_init(stack_b, elem_count, sizeof(t_stack_elem));
	str_destroy(arg_list);
	return (err);
}

static void	set_space_to_null(t_dyn_str *arg_list)
{
	size_t	i;

	i = 0;
	while (arg_list->val[i])
	{
		if (arg_list->val[i] == ' ')
			arg_list->val[i] = 0;
		i++;
	}
}

/* Get single string of arguments separated by '\0'.
 * Set elem_count to the number of elements.*/
static int	get_arg_list(t_dyn_str *new_arg_list, size_t *elem_count,
		int argc, char **argv)
{
	int		err;
	int		i;

	assert(new_arg_list && argv); // REMOVE ME
	err = str_init(new_arg_list, 64);
	if (err)
		return (err);
	i = 1;
	while (i < argc)
	{
		err = str_append(new_arg_list, argv[i]);
		if (err)
			return (err);
		err = str_append(new_arg_list, " ");
		if (err)
			return (err);
		i++;
	}
	*elem_count = count_words(new_arg_list->val, ' ');
	set_space_to_null(new_arg_list);
	return (0);
}
