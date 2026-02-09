/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_destroy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 19:47:34 by amercier          #+#    #+#             */
/*   Updated: 2026/02/09 19:53:17 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dyn_str.h"

void	str_destroy(t_dyn_str *str)
{
	assert(str); // REMOVE ME
	if (str->val)
		free(str->val);
	str->size = 0;
}
