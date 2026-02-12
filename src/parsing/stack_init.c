/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 15:26:55 by amercier          #+#    #+#             */
/*   Updated: 2026/02/12 20:04:09 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init_state.h"

static int	get_int_list(int *int_arr, const t_dyn_str *arg_list,
		size_t elem_count);
static void	fill_stack(t_deque *stack, int *int_arr, int *int_arr_sorted,
		size_t arr_size);
static size_t get_rank(int elem, int *arr, size_t size);

int	stack_init(t_deque *stack, t_dyn_str *arg_list, size_t elem_count)
{
	int				*int_arr;
	int				*int_arr_sorted;
	int				err;
	t_stack_elem	stack_elem;

	int_arr_sorted = NULL;
	int_arr = malloc(elem_count * sizeof(int));
	err = get_int_list(int_arr, arg_list, elem_count);
	if (!err)
		err = detect_duplicate(int_arr, elem_count);
	if (!err)
		err = arr_dup((void **)&int_arr_sorted, int_arr, elem_count, sizeof(int));
	if (!err)
		err = dq_init(stack, elem_count, sizeof(stack_elem));
	if (!err)
	{
		quicksort(int_arr_sorted, 0, elem_count - 1);
		fill_stack(stack, int_arr, int_arr_sorted, elem_count);
	}
	if (int_arr)
		free(int_arr);
	if (int_arr_sorted)
		free(int_arr_sorted);
	return (err);
}

/* Takes str with args separated by '\0' and sets int_arr in reverse order
 * thanks to norminette...*/
static int	get_int_list(int *int_arr, const t_dyn_str *arg_list,
		size_t elem_count)
{
	size_t	i;
	bool	new_word;
	int		elem;
	int		err;

	if (!int_arr)
		return (1);
	i = 0;
	new_word = true;
	while (i < arg_list->len)
	{
		if (!arg_list->val[i])
			new_word = true;
		else if (new_word)
		{
			err = safe_atoi(arg_list->val + i, &elem);
			if (err)
				return (1);
			int_arr[elem_count - 1] = elem;
			elem_count--;
			new_word = false;
		}
		i++;	
	}
	return (elem_count);
}

static void	fill_stack(t_deque *stack, int *int_arr, int *int_arr_sorted,
		size_t arr_size)
{
	t_stack_elem new_node;

	while (!dq_is_full(stack))
	{
		new_node.val = *int_arr;
		new_node.rank = get_rank(*int_arr, int_arr_sorted, arr_size);
		dq_push_front(stack, &new_node);
		int_arr++;
	}
}

static size_t get_rank(int elem, int *arr, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size && arr[i] != elem)
		i++;
	return (i);
}
