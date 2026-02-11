/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amercier <amercier@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 12:11:43 by amercier          #+#    #+#             */
/*   Updated: 2026/02/10 12:50:28 by amercier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deque.h"

typedef struct	s_stack_elem
{
	int		val;
	size_t	rank;
}	t_stack_elem;
