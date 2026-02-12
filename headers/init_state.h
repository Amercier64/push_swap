/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_state.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 12:45:37 by amercier          #+#    #+#             */
/*   Updated: 2026/02/12 19:59:39 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INIT_STATE_H
# define INIT_STATE_H

//libs
#include <assert.h> //REMOVE ME
# include "dyn_str.h"
# include "deque.h"
# include "stack.h"
# include "error.h"

//declarations
int		init_state(t_deque *stack_a, t_deque *stack_b, int argc, char **argv);
int		stack_init(t_deque *stack, t_dyn_str *arg_list, size_t elem_count);
int		detect_duplicate(const int *arr, size_t size);
void	quicksort(int *arr, long lo, long hi);
int		arr_dup(void **dest, const void *src, size_t count, size_t elem_size);
size_t	count_words(char *str, char sep);

#endif
