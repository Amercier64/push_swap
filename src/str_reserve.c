/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_reserve.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 20:59:13 by amercier          #+#    #+#             */
/*   Updated: 2026/02/04 21:26:33 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dyn_str.h"

int	str_reserve(t_dyn_str *str, size_t wanted)
{
	char	*new;

	assert(str); //REMOVE ME
	while (wanted >= str->size)
		str->size <<= 1;
	new = malloc(str->size * sizeof(char));
	if (!new)
		return (1);
	ft_strlcpy(new, str->val, str->size);
	free(str->val);
	str->val = new;
	return (0);
}
