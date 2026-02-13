/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_destroy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 19:47:34 by amercier          #+#    #+#             */
/*   Updated: 2026/02/11 15:23:22 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dyn_str.h"

void	str_destroy(t_dyn_str *str)
{
	assert(str); // REMOVE ME
	if (str->val)
		free(str->val);
	str->val = NULL;
	str->size = 0;
}
