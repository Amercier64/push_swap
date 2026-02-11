/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_dup.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 16:17:08 by amercier          #+#    #+#             */
/*   Updated: 2026/02/11 17:10:40 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <assert.h>

int	arr_dup(void **dest, const void *src, size_t count, size_t elem_size)
{
	assert(dest && src); // REMOVE ME
	
	*dest = malloc(count * elem_size);
	if (*dest == NULL)
		return (1);
	ft_memcpy(*dest, src, count * elem_size);
	return (0);
}
