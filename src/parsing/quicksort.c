/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 16:16:58 by amercier          #+#    #+#             */
/*   Updated: 2026/02/13 15:06:00 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <sys/types.h>
#include <stddef.h>

static void		swap(int *a, int *b);
static long	partition(int *arr, long lo, long hi);

void			quicksort(int *arr, long lo, long hi)
{
	long pivot;

	if (lo >= hi || lo < 0)
		return ;
	pivot = partition(arr, lo, hi);
	quicksort(arr, lo, pivot - 1);
	quicksort(arr, pivot + 1, hi);
}

static long	partition(int *arr, long lo, long hi)
{
	int		pivot;
	long	i;
	long	j;

	pivot = arr[hi];
	i = lo;
	j = lo;
	while (j < hi)
	{
		if (arr[j] <= pivot)
		{
			swap(arr + i, arr + j);
			i++;
		}
		j++;
	}
	swap(arr + i, arr + hi);
	return (i);
}

static void	swap(int *a, int *b)
{
	assert(a != NULL && b != NULL);
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
