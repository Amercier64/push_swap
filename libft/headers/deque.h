/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:05:24 by amercier          #+#    #+#             */
/*   Updated: 2026/02/13 20:25:30 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEQUE_H
# define DEQUE_H

//includes
/* #include <stdlib.h> */
# include <stdbool.h>
# include "libft.h"
# include "circular_buffer.h"
#include <assert.h> // DON'T FORGET TO REMOVE ME BEFORE LAST PUSH !!!

//structs
typedef struct s_deque
{
	t_circular_buffer	cb;
	size_t				head;
	size_t				tail;
	size_t				count;
}	t_deque;

//declarations
int		dq_init(t_deque *dq, size_t capacity, size_t elem_size);
bool	dq_is_empty(t_deque *dq);
bool	dq_is_full(t_deque *dq);
int		dq_push_front(t_deque *dq, void *elem);
int		dq_push_back(t_deque *dq, void *elem);
int		dq_pop_front(t_deque *dq, void *elem);
int		dq_pop_back(t_deque *dq, void *elem);
void	dq_clear(t_deque *dq);
int		dq_dup(t_deque *dest, const t_deque *src);

#endif
