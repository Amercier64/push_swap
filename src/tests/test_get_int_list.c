/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_get_int_list.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 19:11:30 by amercier          #+#    #+#             */
/*   Updated: 2026/02/11 20:04:42 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "dyn_str.h"

static int	get_int_list(int *int_arr, const t_dyn_str *arg_list, size_t elem_count);
static int	get_arg_list(t_dyn_str *new_arg_list, size_t *elem_count,
		int argc, char **argv);
static void	set_space_to_null(t_dyn_str *arg_list);
size_t		count_words(char *str, char sep);

int main(int argc, char **argv)
{
	int			*arr;
	size_t		size;
	t_dyn_str	arg_list;

	assert(get_arg_list(&arg_list, &size, argc, argv) == 0);
	printf("arg_list: OK\n");
	assert(size > 0);
	printf("size: OK\n");
	assert((arr = malloc(size * sizeof(int))));
	printf("malloc arr: OK\n");
	assert(get_int_list(arr, &arg_list, size) == 0);
	print_int_arr(arr, size);
}

static int	get_int_list(int *int_arr, const t_dyn_str *arg_list,
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

/* Get single string of arguments separated by '\0'.
 * Set elem_count to the number of elements.*/
static int	get_arg_list(t_dyn_str *new_arg_list, size_t *elem_count,
		int argc, char **argv)
{
	int		err;
	int		i;

	assert(new_arg_list && argv); // REMOVE ME
	err = str_init(new_arg_list, 64);
	if (err)
		return (err);
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
