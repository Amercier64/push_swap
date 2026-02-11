/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_detect_duplicate.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:31:33 by amercier          #+#    #+#             */
/*   Updated: 2026/02/11 18:39:24 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	detect_duplicate(const int *arr, size_t size);

int main(int argc, char **argv)
{
	int		*arr;
	size_t	size;

	size = argc - 1;
	if (!size)
		return 1;
	assert((arr = malloc(size * sizeof(int))));
	for (size_t i = 0; i < size; i++)
		arr[i] = atoi(argv[i + 1]);
	print_int_arr(arr, size);
	assert(detect_duplicate(arr, size) == 0);
	printf("Detect_dup OK\n");
}
