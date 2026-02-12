/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_int_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 18:21:23 by amercier          #+#    #+#             */
/*   Updated: 2026/02/12 18:42:08 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_int_list.h"

int	get_int_list(int *int_arr, const t_dyn_str *arg_list,
		size_t elem_count)
{
	size_t	i;
	bool	new_word;
	int		elem;
	int		err;

	if (!int_arr)
		return (1);
	i = 0;
	new_word = true;
	while (i < arg_list->len)
	{
		if (!arg_list->val[i])
			new_word = true;
		else if (new_word)
		{
			err = safe_atoi(arg_list->val + i, &elem);
			if (err)
				return (1);
			int_arr[elem_count - 1] = elem;
			elem_count--;
			new_word = false;
		}
		i++;	
	}
	return (elem_count);
}
