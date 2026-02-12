/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_arg_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 18:22:27 by amercier          #+#    #+#             */
/*   Updated: 2026/02/12 18:40:36 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_int_list.h"

static void	set_space_to_null(t_dyn_str *arg_list);

/* Get single string of arguments separated by '\0'.
 * Set elem_count to the number of elements.*/
int	get_arg_list(t_dyn_str *new_arg_list, size_t *elem_count,
		int argc, char **argv)
{
	int		err;
	int		i;

	assert(new_arg_list && argv); // REMOVE ME
	err = str_init(new_arg_list, 64);
	if (err || argc < 2)
		return (1);
	i = 1;
	while (i < argc)
	{
		err = str_append(new_arg_list, argv[i]);
		if (err)
			return (err);
		err = str_append(new_arg_list, " ");
		if (err)
			return (err);
		i++;
	}
	*elem_count = count_words(new_arg_list->val, ' ');
	set_space_to_null(new_arg_list);
	return (0);
}

static void	set_space_to_null(t_dyn_str *arg_list)
{
	size_t	i;

	i = 0;
	while (arg_list->val[i])
	{
		if (arg_list->val[i] == ' ')
			arg_list->val[i] = 0;
		i++;
	}
}
