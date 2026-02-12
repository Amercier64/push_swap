/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_quick_sort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 18:04:03 by amercier          #+#    #+#             */
/*   Updated: 2026/02/12 19:12:22 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "get_int_list.h"

void			quicksort(int *arr, long lo, long hi);

int main(int argc, char **argv)
{
	t_dyn_str	arg_list;
	int			*arr;
	size_t		elem_count;
	if (argc < 2)
		return (1);
	assert(get_arg_list(&arg_list, &elem_count, argc, argv) == 0);
	arr = malloc(sizeof(int) * elem_count);
	assert(get_int_list(arr, &arg_list, elem_count) == 0);
	print_int_arr(arr, elem_count);
	quicksort(arr, 0, elem_count - 1);
	print_int_arr(arr, elem_count);
}
