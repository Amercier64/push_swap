/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_state.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 12:45:37 by amercier          #+#    #+#             */
/*   Updated: 2026/02/11 16:35:45 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INIT_STATE_H
# define INIT_STATE_H

//libs
#include <assert.h> //REMOVE ME
# include "dyn_str.h"
# include "error.h"

//declarations
int		init_state(t_deque *stack_a, t_deque *stack_b, int argc, char argv**);
size_t	count_words(char *str, char sep);

#endif
