/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   todo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 14:13:56 by amercier          #+#    #+#             */
/*   Updated: 2026/02/06 19:24:46 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>

int	main(int argc, char **argv)
{
	t_error		err;
	int			is_new_word;
	size_t		i;
	t_dyn_str	arg_list;
	int			int_arr[100];
	int			j = 0;

	assert(argc >= 2);
	i = 1;
	err = str_init(arg_list, 64);
	assert(!err);
	while (i < argc)
	{
		err = str_append(arg_list, argv[i]);
		assert(!err);
		i++;
	}
	i = 0;
	while (arg_list.val[i])
	{
		if (arg_list.val[i] == ' ')
			arg_list.val[i] = 0;
		i++;
	}
	i = 0;
	is_new_word = 1;
	while (i < arg_list.len)
	{
		if (!arg_list[i])
			is_new_word = 1;
		else if (is_new_word)
		{
			err = safe_atoi(arg_list.val + i, int_arr[j]);
			assert(!err);
			j++;
			is_new_word == 0;
		}
		i++;	
	}
}
