/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int_arr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 16:41:48 by amercier          #+#    #+#             */
/*   Updated: 2026/02/11 16:45:34 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	print_int_arr(int	*arr, size_t size)
{
	printf("[");
	for (size_t i = 0; i < size - 1; i++)
	{
		printf("%d, ", arr[i]);
	}
	printf("%d]\n", arr[size - 1]);
}
