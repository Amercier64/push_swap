/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 21:02:57 by amercier          #+#    #+#             */
/*   Updated: 2026/02/04 21:32:21 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dyn_str.h"

int	str_init(t_dyn_str *str, size_t size)
{
	assert(str);
	str->val = malloc(size * sizeof(char));
	if (!str->val)
		return (1);
	str->val[0] = 0;
	str->size = size;
	str->len = 0;
	return (0);
}
