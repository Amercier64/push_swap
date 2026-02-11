/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 15:26:55 by amercier          #+#    #+#             */
/*   Updated: 2026/02/11 16:20:26 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		get_int_list(int **int_arr, t_dyn_str *arg_list, size_t elem_count);
void	fill_stack(t_deque *stack, int *int_arr, int *int_arr_sorted);

int	stack_init(t_deque *stack, t_dyn_str *arg_list, size_t elem_count)
{
	int				*int_arr;
	int				*int_arr_sorted;
	int				err;
	t_stack_elem	stack_elem;

	int_arr_sorted = NULL;
	err = get_int_list(&int_arr, arg_list, elem_count);
	if (!err)
		err = detect_duplicate(int_arr, elem_count);
	if (!err)
		err = arr_dup(&int_arr_sorted, int_arr, elem_count, sizeof(int));
	if (!err)
		err = dq_init(stack, elem_count, sizeof(stack_elem));
	if (!err)
	{
		quick_sort(int_arr_sorted);
		fill_stack(stack, int_arr, int_arr_sorted);
	}
	if (int_arr)
		free(int_arr);
	if (int_arr_sorted)
		free(int_arr_sorted);
	return (err);
}

int		get_int_list(int **int_arr, t_dyn_str *arg_list, size_t elem_count)
{
}

void	fill_stack(t_deque *stack, int *int_arr, int *int_arr_sorted)
{	
}
