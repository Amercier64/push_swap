/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_arr_dup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 16:37:12 by amercier          #+#    #+#             */
/*   Updated: 2026/02/11 17:11:19 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	arr_dup(void **dest, const void *src, size_t count, size_t elem_size);

int main(int argc, char **argv)
{
	int		*arr;
	int		*dup;
	size_t	size;
	int		err;

	size = argc - 1;
	if (!size)
		return 1;
	assert((arr = malloc(size * sizeof(int))));
	for (size_t i = 0; i < size; i++)
		arr[i] = atoi(argv[i + 1]);
	print_int_arr(arr, size);
	err = arr_dup((void **)&dup, arr, size, sizeof(int));
	assert(err == 0);
	print_int_arr(dup, size);
}
