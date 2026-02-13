/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   circular_buffer.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 15:28:18 by amercier          #+#    #+#             */
/*   Updated: 2026/02/13 19:33:27 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CIRCULAR_BUFFER_H
# define CIRCULAR_BUFFER_H

//includes
# include <stdlib.h>
# include <libft.h>
#include <assert.h> // DON'T FORGET TO REMOVE ME BEFORE LAST PUSH !!!

//structs
typedef struct s_circular_buffer
{
	size_t	capacity;
	size_t	elem_size;
	void	*val;
}	t_circular_buffer;

//declarations
int			cb_init(t_circular_buffer *cb, size_t capacity, size_t elem_size);
size_t		cb_get_capacity(const t_circular_buffer *cb);
size_t		cb_get_elem_size(const t_circular_buffer *cb);
void		cb_destroy(t_circular_buffer *cb);
size_t		cb_get_next_index(const t_circular_buffer *cb, size_t index);
size_t		cb_get_prev_index(const t_circular_buffer *cb, size_t index);
void		cb_set(t_circular_buffer *cb, size_t index, void *elem);
void		*cb_at(t_circular_buffer *cb, size_t index);
void		cb_cpy(t_circular_buffer *dest, const t_circular_buffer *src);

#endif
