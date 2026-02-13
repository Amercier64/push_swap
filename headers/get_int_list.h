/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_int_list.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 18:34:47 by amercier          #+#    #+#             */
/*   Updated: 2026/02/12 18:45:35 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_INT_LIST_H
# define GET_INT_LIST_H

# include "dyn_str.h"
# include <stdbool.h>

int	get_int_list(int *int_arr, const t_dyn_str *arg_list,
		size_t elem_count);
int	get_arg_list(t_dyn_str *new_arg_list, size_t *elem_count,
		int argc, char **argv);
size_t	count_words(char *str, char sep);

#endif
