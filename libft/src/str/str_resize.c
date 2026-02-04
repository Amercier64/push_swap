/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_resize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 16:10:17 by amercier          #+#    #+#             */
/*   Updated: 2026/02/04 18:36:31 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

int	str_resize(char *str, size_t *size)
{
	char	*tmp;

	assert(str && size); //REMOVE ME
	*size = *size << 1;
	tmp = malloc(*size * sizeof(char));
	if (!tmp)
		return (1);
	ft_strlcpy(tmp, str, size);
	free(str);
	str = tmp;
	return (0);
}
